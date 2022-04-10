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
    ll hashh(string s)
    {
        ll ans = 0,x = s.size();

        for (int i = 0;i<x;i++)
        {
            ans+=((s[i]-'a'+1)%MOD);
        }
        return ans;
    }
     
    int main(){
        
        TC(t)
        {
            int n,m;
            cin >> n >> m;

            vector <string> s(n);

            int a[m] = {0};

            FL(n)
            {
                cin >> s[i];
                for(int j = 0;j<m;j++)
                {
                    a[j]+=(s[i][j]-'a');
                }
            }
            
            for (int i = 0;i<n-1;i++)
            {
                string y;
                cin >> y;

                for (int j = 0;j<m;j++)
                {
                    a[j]-=(y[j]-'a');
                }
            }
            char ans;

            for(int i = 0;i<m;i++)
            {
                ans = (int)a[i]+'a';
                cout << ans ;
            }
            cout << endl;
        }
     
        return 0;
    }