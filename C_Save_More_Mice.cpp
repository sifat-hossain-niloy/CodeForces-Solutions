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
        ll n,k;
        cin >> n >> k;

        ll a[k],b[k];

        FL(k)
        {
            cin >> a[i];
            b[i] = n-a[i];
        }
        sort(b,b+k);

        for(int i = 1;i<k;i++)
        {
            b[i] = b[i]+b[i-1];
        }
        ll ans= k;
        for(int i = 0 ;i<k;i++)
        {
            if(b[i]>=n)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}