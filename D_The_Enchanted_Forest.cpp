
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
    
    int t;
    cin >> t;
    while(t--)
    {
        ll n,k,ans = 0;
        cin >> n >> k;

        ll a[n];
        vector<ll> pre(n+1,0);
        FL(n) cin >> a[i];

        for (int i = 0;i<n;i++)
        {
            pre[i+1] = pre[i]+a[i];
        }

        if(k>n)
        {
            ans+=(2*n*k-n*n-n)/2;
            ans+=pre[n];
        }
        else{
            ans+=(k*(k-1))/2;
            ll maxi = 0;

            for (int i = 0;i+k<=n;i++)
            {
                maxi = max(maxi,pre[i+k]-pre[i]);
            }
            ans+=maxi;
        }
        cout << ans << endl;
        
    }
    
    return 0;
}