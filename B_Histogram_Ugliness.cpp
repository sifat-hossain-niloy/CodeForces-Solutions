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
            int n;
            cin >> n;

            ll ans = 0;

            int a[n+2];
            a[0]=0;
            a[n+1] = 0;

            for (int i = 1;i<=n;i++)
            {
                cin >> a[i];
            }

            for (int i = 1;i<=n;i++)
            {
                if (a[i]>a[i-1] && a[i]>a[i+1])
                {
                    int x = max(a[i-1],a[i+1]);
                    ans+=(a[i]-x);
                    a[i] = x;
                }
            }
            for (int i = 1;i<=n+1;i++)
            {
                ans+= abs(a[i-1]-a[i]);
            }
            cout << ans << endl;

        }
     
        return 0;
    }