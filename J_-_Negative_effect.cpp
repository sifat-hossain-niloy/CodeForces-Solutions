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
    int n;
    cin >> n;
    ll m;
    cin >> m;

    ll a[n+1], b[n+1];

    a[0]=0;
    for (int i = 1;i<=n;i++)
    {
        cin >> b[i];
        a[i] = b[i]+a[i-1];
    }
    if(n==1)
    {
        cout << m << endl;
        return 0;
    }

    ll ma = a[n];

    for (int i = 1;i<=n;i++)
    {
        ll ans = INT64_MIN;
        ans = max(a[i-1],ma-a[i]);
        ans = max(ans,ma+m-b[i]);
        cout << ans << " " ;
    }
    
    return 0;
}