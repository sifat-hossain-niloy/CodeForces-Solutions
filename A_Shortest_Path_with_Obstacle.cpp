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
        
            int xa,ya,xb,yb,xf,yf;
            cin >> xa >> ya;
            cin >> xb >> yb;
            cin >> xf >> yf;
            int ans = abs(xa-xb)+abs(ya-yb);

            if(xa==xb && xb==xf)
            {
                int x = abs(ya-yf)+abs(yb-yf);
                int y = abs(ya-yb);
                if(x==y)ans+=2;
            }
            else if(ya==yb && yb==yf)
            {
                int x = abs(xa-xf)+abs(xb-xf);
                int y = abs(xa-xb);
                if(x==y)ans+=2;
            }
            cout << ans << endl;
            /*cout << xa <<" " << ya << endl;
            cout << xb <<" " << yb<< endl;
            cout << xf <<" "<< yf<< endl;*/
        }
     
        return 0;
    }