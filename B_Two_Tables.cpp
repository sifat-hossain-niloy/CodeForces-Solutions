#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#include<vector>
#include<set>

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
        ll n,m;
        cin >> n >> m;

        ll x,y,x1,y1;
        cin >> x >> y >> x1 >> y1;

        ll W,H;
        cin >> W>>H;

        ll w = x1-x;
        ll h = y1-y;

        if(w+W>n && h+H>m) cout << -1 << endl; 
        else{
            long double ans;
            ll s1,s2;

            if(w+W>n)
            {
                ans = min(abs(H-y),abs(H-m+y1));
            }
            else if(h+H>m)
            {
                ans = min(abs(W-x),abs(W-n+x1));
            }
            else{
                ll s1 = min(abs(H-y),abs(H-m+y1));
                ll s = min(abs(W-x),abs(W-n+x1));
                ans = min(s,s1);
            }

            cout << fixed << setprecision(9) << ans << endl;
        }
    }

    return 0;
}