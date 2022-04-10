#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

#define MOD 1000000007
#define ll long long
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
        ll n;
        cin >> n ;
        ll x,mex = -1,mix = -1;
        set<ll> s,temp;
        vector<pair<ll,ll>> v;

        FL(n)
        {
            cin >> x;

            mex = max(x,mex);
            s.insert(x);

            mix = max(x,mix);
            temp.insert(x); 

            if(s.size()==mex+1)
            {
                v.push_back({mex+1,i});
                temp.clear();
                mix = -1;
            }
        }
        vector<ll> ans ;

        for (int i)
        
    }
    return 0;
}