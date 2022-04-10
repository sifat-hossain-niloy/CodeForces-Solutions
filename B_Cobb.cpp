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

int const n = 1e5;
int is_prime[n];

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
        int n,k;
        cin >> n >> k;

        ll a[n+1];
        a[0] = -1;

        vector<ll> v;

        for(int i = 1 ;i<=n;i++)
        {
            cin >> a[i];
            if(a[i]==a[i-1])
            {
                v.pb(i);
            }
        }
        ll ans = n*(n-1)-k*(a[n]|a[n-1]);

        for(auto i: v)
        {
            ans = max(ans,i*(i-1)-k*(a[i]|a[i-1]));
        }
        cout << ans << endl;

    }

    return 0;
}