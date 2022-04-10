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
            int n,sum = 0;
            cin >> n;

            int a[n],b[10001] = {0};

            FL(n)
            {
                cin >> a[i];
                b[a[i]]++;
                sum +=a[i];
            }

            if (sum%n)
            {
                cout << -1 << endl;
            }
            else{
                int x = sum/n,ans = 0;

                for (int i = 0;i<=x;i++)
                {
                    ans+=b[i];
                }
                cout << n - ans << endl;
            }
        }
     
        return 0;
    }