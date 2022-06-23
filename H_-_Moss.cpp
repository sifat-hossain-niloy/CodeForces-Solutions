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

    ll n,m;
    cin >> n >> m;
    ll a = INT64_MAX,b = INT64_MAX,c = INT64_MAX,d=INT64_MAX;

    FL(m)
    {
        ll x,y;
        cin >> x >> y;

        a = min(a,max(abs(x-1),abs(y-1)));
        b = min(b,max(abs(x-1),abs(y-n)));
        c = min(c,max(abs(x-n),abs(y-1)));
        d = min(d,max(abs(x-n),abs(y-n)));
    }
    ll ans = max(a,b);
    ans= max(ans,c);
    ans = max(ans,d);


    ll ax[m+2],ay[m+2],j = 1;
    FL(m)
    {
        ll x,y;
        cin >> x >> y;
        ax[j] = x;
        ay[j] = y;
        j++;
    }
    ll a1 = 0,a2=0;
    ax[0] = 1,ay[0] = 1,ax[m+1] = n,ay[m+1] = n;
    for (int i = 1;i<=m+1;i++)
    {
        a1 = max(a1,(ax[i]-ax[i-1]+1)/2);
        a2 = max(a2,(ay[i]-ay[i-1]+1)/2);
    }
    a1 = max(a1,a2);
    a1 = max(a1,ans);
    
    
    cout << a1 << endl;
    
    return 0;
}
