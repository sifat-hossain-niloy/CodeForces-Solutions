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
            int a[n],b[n];

            FL(n)
            {
                cin >> a[i];
            }
            sort(a,a+n);
            
            int l,r,mi = INT_MAX;

            for (int i = 1;i<n;i++)
            {
                if(a[i]==a[i-1])
                {
                    l = i-1;
                    r = i;
                    break;
                }
                else 
                {
                    int dif = a[i] - a[i-1];

                    mi = min(mi,dif);

                    if(mi == dif )
                    {
                        l = i-1;
                        r = i;
                    }
                }
            }
            int x = n-1,y = 0;

            b[0] = a[l];
            b[n-1] = a[r];
            cout << b[0] << " ";
            

            for (int i = (r)%(n-1); i!=l ; i = (i+1)%(n-1))
            {
                cout << a[i] << " ";

            } 
            cout << b[n-1] << endl;
        }
     
        return 0;
    }