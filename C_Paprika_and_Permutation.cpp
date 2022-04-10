#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

#define MOD 1000000007
#define ll long long
#define deb(x) cout<<#x<<"="<<x<<'\n'
#define deb2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define deb3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'

#define TC(t)           int t;cin >> t;while(t--)
#define FL(t)           for(int i=0;i<t;i++)
#define Y               cout << "YES\n"
#define N               cout << "NO\n"
#define ff first
#define ss second
#define pb push_back
#define pf push_front

#define Fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a;
        b >>= 1;
    }
    return res;
}


int main(){

    
    TC(t)
    {
        ll n,hobe = 1,cnt = 0;

        cin >> n;

        set<ll> s;

        for (int i = 1;i<=n;i++)
        {
            s.insert(i);
        }

        vector<ll> a ;     

        FL(n)
        {
            ll x;
            cin >> x;
            if(s.find(x)!=s.end())
            {
                s.erase(x);
            }
            else{
                a.push_back(x);
            }
        } 

        sort(a.begin(),a.end());
        

        for (auto &rem :a)
        {
            auto x = s.begin();
            ll temp = *x;
            if(temp>(rem-1)/2)
            {
                hobe = -1;

            }
            else{
                s.erase(x);
            }
        }  
        if(hobe==-1) {
            cout << hobe << endl;
        }
        else{
            cout << a.size() << endl;
        }
    }
    return 0;
}