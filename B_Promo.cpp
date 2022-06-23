#include<bits/stdc++.h>

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
    
    int t = 1;
    //cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;

        ll a[n];
        FL(n) cin >> a[i];
        sort(a,a+n);
        ll b[n+1];
        b[0] = 0;
        for (int i = 1;i<=n;i++)
        {
            b[i] = a[i-1]+b[i-1];
        }
        // for (int i = 0;i<=n;i++)
        // {
        //     cout << b[i] << " ";
        // }
        

        for (int i = 0;i<q;i++)
        {
            int x,y;
            cin >> x>>y;
            x = n-x;
            
            y = x+y;
           // cout << x << " " << y << endl;
            ll ans = b[y]-b[x];
            cout << ans << endl;
        }

    }
    
    return 0;
}