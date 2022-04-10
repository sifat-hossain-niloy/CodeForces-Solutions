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
        
        TC(k)
        {
            ll n,x,t;
            cin >> n >> x >> t;

            if(x>t)
            {
                cout << 0<< endl;
            }
            else if(x==t)
            {
                cout << n-1<< endl;
            }
            else if(((n-1)*x)<=t)
            {
                unsigned ll ans = (n*(n-1))/2;
                cout << ans << endl;
            }
            else{
                int ma = (n-1);

                int m = t/x;
                m =  min(m,ma);

                unsigned ll ans = (n-m)*(m)+1;
                cout << ans << endl;
            }
        }
     
        return 0;
    }