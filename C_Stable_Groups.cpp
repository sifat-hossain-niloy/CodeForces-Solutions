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
        
            int n;
            ll k,x;
            
            cin >> n >> k >> x;

            ll a[n];

            FL(n)
            {
                cin >> a[i];
            } 

            sort(a,a+n);

            vector <ll> v;

            for(int i = 1;i<n;i++)
            {
                ll y = a[i]-a[i-1];

                if(y>x)
                {
                    v.push_back((y-1)/x);
                }
            }

            sort(v.rbegin(),v.rend());
            
            while(k>0 && v.size()!=0)
            {
                if(v.back()<=k)
                {
                    k = (k-v.back());
                    v.pop_back();
                }
                else{
                    break;
                }
            }
            cout << v.size()+1 << endl;
     
        return 0;
    }