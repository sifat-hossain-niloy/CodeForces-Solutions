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
    //Fastio
    
    ll t;
    cin >> t;

    for (int tt = 1;tt<=t;tt++)
    {
        cout << "Case #" << tt << ": ";

        ll n,ans = 0;
        cin >> n;

        ll a[n];

        FL(n)
        {
            cin >> a[i];
        }

        ll so_far_max = INT64_MIN;
        ll l = 0,r = n-1;

        while(l<=r)
        {
            if(a[l]<=a[r])
            {
                if(a[l]>=so_far_max)
                {
                    ans++;
                    
                }
                so_far_max = max(so_far_max,a[l]);
                l++;
            }

            else{

                if(a[r]>=so_far_max)
                {
                    ans++;
                    
                    
                    //continue;
                }
                so_far_max = max(so_far_max,a[r]);
                r--;
                
            }

        }
        cout << ans << endl;
    }
    
    return 0;
}