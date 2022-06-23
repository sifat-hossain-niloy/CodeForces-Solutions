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
    Fastio
    
    TC(t)
    {
        int n;
        cin >> n;
        ll a[n];
        ll ma= -1;
        map<ll,ll> mp;

        FL(n)
        {
            cin  >> a[i];
            ma = max(ma,a[i]);
            mp[a[i]]++;
        }
        ll sm = -1;
        FL(n)
        {
            if(a[i]>sm && a[i]!=ma) sm = a[i];
        }
        FL(n)
        {
            if(a[i]==ma)
            {
                if(mp[ma]==1)
                {
                    cout <<(ma+sm)%MOD << " ";
                }
                else{
                    cout << (ma*2)%MOD << " ";
                }
            }
            else {
                cout << (a[i]+ma)%MOD << " ";
            }
        }
        cout << endl;
        
        
    }
    return 0;
}