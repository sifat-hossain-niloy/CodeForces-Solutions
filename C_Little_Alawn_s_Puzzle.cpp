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
    int BINPOW(int x,int p)
    {
        int rez = 1;
        while(p > 0)
        {
            if(p & 1)
            {
                rez = (1ll * rez * x) % MOD;
            }
            x = (1ll * x * x) % MOD;
            p >>=1;
        }
        return rez;
    }
     
    int main(){
        
        TC(t)
        {
            int n;
            cin >> n;

            int a[n],b[n];
            int c [n+1] , d[n+1];

            
            FL(n+1)
            {
                d[i] = 0;
            }
            FL(n)
            {
                cin >> a[i];
                
            } 
            FL(n)
            {
                cin >> b[i];
                c[a[i]] = b[i];
            }
            int sum = 0;

            for (int i = 1; i<=n;i++)
            {
                if(d[i] == 0)
                {
                    d[i] = 1;
                    int x = c[i];

                    while(d[x] == 0)
                    {
                        d[x] = 1;
                        x = c[x];
                    }
                    sum++;
                }
            }
            ll x = 2,y = sum;
        
            cout << lgput(x,y) << endl;

        }
     
        return 0;
    }