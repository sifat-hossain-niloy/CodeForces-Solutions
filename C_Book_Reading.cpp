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
        ll n,m;
        cin >> n >> m;
        ll a[11];
        a[0] = 0;
        if(n<m)
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = 1;i<11;i++)
        {
            a[i] = (i)*m%10;
        }

        for (int i = 1;i<11;i++)
        {
            a[i] +=a[i-1];
        }
        //cout << a[10] << " ";
        ll div = n/m ,res = n/m;div/=10;
        //cout << div;
        ll ans = div*a[10]+a[res%10];
        cout << ans << endl;
    }
    return 0;
}                                                                                                                                                     b-'''=+=--p0[]-p8i5t47