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
ll dp[1048578];
int main(){
    Fastio

    int n;
    cin >> n;
    //memset(dp,-1,sizeof(dp));

    ll ans = 0,poww = binpow(2,n);

    for (int i = 0;i<poww;i++)
    {
        ll now = i,tmp = 0;
        while(now!=0)
        {
            int cnt = __builtin_popcount(now);
            //cout << cnt << endl;
            int nw = now>>(n-cnt);
            
            
            if(nw &1)
            {
                ll xd = (1<<(n-cnt));
                //cout << " dsf " << xd << endl;
                now = now & (poww-1 - xd);
                //cout << now << endl;
            }
            else{
                //cout << " g " << (1<<(n-cnt)) << endl;
                now = now | (1<<(n-cnt));
                
            }
            //cout << endl;
            tmp++;    
        }
        
        ans +=tmp;

    }
    //cout << ans << endl;
    ll bp = binpow(2,n);
    ll g = __gcd(ans,bp);
    ans/=g;
    bp/=g;
    cout << ans << '/'<< bp << endl;
    return 0;

}