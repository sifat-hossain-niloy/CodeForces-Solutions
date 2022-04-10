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
        ll w,h;
        ll ans = 0;
        cin >> w >> h;

        

        ll k;

        cin >> k;
        ll h1[k];
        FL(k)
        {
            cin >> h1[i];
        }
        
        ans = max(ans,h*(h1[k-1]-h1[0]) );

        cin >> k;
        ll h2[k];
        FL(k)
        {
            
            cin >> h2[i];
        }
        
        ans = max(ans,h*(h2[k-1]-h2[0]) );

        cin >> k;
        ll v1[k];
        FL(k)
        {
            cin >> v1[i];
        }
        
        ans = max(ans,w*(v1[k-1]-v1[0]) );

        
        cin >> k;
        ll v2[k];
        FL(k)
        {
            cin >> v2[i];
        }
        
        ans = max(ans,w*(v2[k-1]-v2[0]) );
        
        cout <<  ans << endl;

        
        
    }
    return 0;
}