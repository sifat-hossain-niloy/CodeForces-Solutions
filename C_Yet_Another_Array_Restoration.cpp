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
            int n,x,y;
            cin >>  n  >> x >> y;

            int diff = y-x,ff = -1;

            for (int i = 1;i<=diff;i++)
            {
                if( (diff/i +1)<=n && diff%i==0 )
                {
                    ff= i;
                }
                if(ff!=-1)
                {
                    break;
                }
            }

            int ans = y,oh = -1;
            while(n--)
            {
                if(oh == -1 && ans>0)
                {
                    cout << ans << " ";
                    ans-=ff;
                }
                else 
                {
                    cout<< ans << " ";
                    ans+=ff;
                }
                if(ans<=0)
                {
                    ans = y+ff;
                    oh = 1;
                }

            }
            cout << endl;
        }
     
        return 0;
    }