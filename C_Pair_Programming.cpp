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
            int k,n,m;
            cin >> k >> n >> m;

            int a[n],b[m],c[n+m];

            FL(n) cin >> a[i];
            FL(m) cin >> b[i];

            int x=0,y=0;

            bool h = true;

            for (int i = 0;i<n+m;i++)
            {
                if(a[x]==0 && x<n)
                {
                    c[i]= a[x];
                    x++;
                    k++;
                }
                else if(b[y]==0 && y<m)
                {
                    c[i]= b[y];
                    y++;
                    k++;
                }
                else if(a[x]<=k && x<n)
                {
                    c[i]= a[x];
                    x++;
                }
                else if(b[y]<=k && y<m)
                {
                    c[i] = b[y];
                    y++; 
                }
                else if(a[x]>k && x<n)
                {
                    if(b[y]>k || y>=m)
                    {
                        h = false;
                        break;
                    }
                    else {
                        c[i] = b[y];
                        y++;
                    }
                }
                else if(b[y]>k && y<m)
                {
                    if(a[x]>k || x>=n)
                    {
                        h = false;
                        break;
                    }
                    else {
                        c[i] = a[x];
                        x++;
                    }
                }
            }
            if(!h)
            {
                cout << -1 << endl;
            }
            else
            {
                for (int i = 0;i<n+m;i++)
                {
                    cout << c[i] << " ";
                }
                cout << endl;
            }

        }
     
        return 0;
    }