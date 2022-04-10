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
        
        int n,m;
        cin >> n >> m;

        vector<pair<int,int>> v(m);

        FL(m)
        {
            cin >> v[i].second >> v[i].first;
        }
        ll ans = 0,tot = n;

        sort(v.rbegin(),v.rend());

        for(int i = 0;i<m;i++)
        {
            if(v[i].second<tot)
            {
                ans+=(v[i].second*v[i].first);
                tot-=v[i].second;
            }
            else{
                ans+=(tot*v[i].first);
                break;
            }
        }
        cout << ans << endl;

     
        return 0;
    }