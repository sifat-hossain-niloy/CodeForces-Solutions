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
        ll n,ma = -1;
        cin >> n;
        ll a[n];
        FL(n)
        {
            cin >> a[i];
            ma = max(ma,a[i]);
        }
        ll ans = 1e18,res;

        for (auto u : {ma,ma+1})
        {
            ll tw = 0,o = 0;
            for (int i = 0;i<n;i++)
            {
                if((u-a[i])%2==1)
                {
                    o++;
                    
                }
                tw+=((u-a[i])/2);
                //cout << u-a[i] << endl;
                
            }
            //cout << u << endl;
            //cout << o <<  " " << tw << endl;
            ll lo = 0,hi = 1e18;
            while(lo<=hi)
            {
                ll mid = (lo+hi)/2;
                ll cnt1 = (mid+1)/2,cnt2 = mid-cnt1;

                if(o<=cnt1 && tw<=(cnt2+(cnt1-o)/2))
                {
                    res = mid;
                    hi = mid-1;
                }
                else{
                    lo = mid+1;
                }
                //cout << lo << " " << hi << endl;

            }
            ans = min(ans,res);
        }
        cout << ans << endl;
        
    }
    return 0;
}