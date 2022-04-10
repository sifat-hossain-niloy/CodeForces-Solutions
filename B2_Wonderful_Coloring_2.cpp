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
            int n,k,cn=0,cnt =0;
            cin >> n >> k;
            int ans[n] = {0};

            vector < vector<int>> pos(n+2);

            for (int i = 0;i<n;i++)
            {
                int x;
                cin >> x;
                
                if(pos[x].size()<k)
                {
                    pos[x].pb(i);
                    cn++;
                }
            }

            int ff = 1;
            
            for(int i = 1;i<=n;i++)
            {

                while(pos[i].size()!=0 && cnt!=cn-(cn%k))
                {
                    cnt++;

                    int x = pos[i].back();
                        
                    ans[x] = ff;
                    if(ff==k) ff=1;
                    else ff++;
                    pos[i].pop_back();
                
                }
                if(cnt==cn-(cn%k)) break;
            }
            FL(n)
            {
                cout << ans[i] << " ";
            }
            cout << endl;

        }
     
        return 0;
    }