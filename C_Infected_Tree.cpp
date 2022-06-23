#include<bits/stdc++.h>
#include<stdio.h>

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
#define NN 300005

vector<int> adj[NN];
bool visited[NN];
vector<int> val(NN);

ll dfs(int s) {
    visited[s] = true;
    ll ans = 0;
    for (auto y : adj[s])
    {
        if(visited[y]== false)
        {
            ans+=(dfs(y));
            ans++;
        }
    }
    val[s] = ans;
    return ans;
}
void initialize() {
    for(int i = 0;i < NN;++i)
    {
        visited[i] = false;
        val[ i ] = 0;
    }
}
void ini ()
{
    for(int i = 0;i < NN;++i)
    {
        visited[i] = false;
        //val[ i ] = 0;
    }

}




int main(){
    //Fastio
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        for (int i = 0;i<n-1;i++)
        {
            int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        //initialize();
        for(int i = 1;i <=n;i++)
        {
            visited[i] = false;
            val[i] = 0;
        }
        
        
        
        
        dfs(1);
        if(n==300000)
        {
            for (int i = 1;i<=n;i++)
            {
                cout << i << " " << val[i] << endl;
            }
        }
        //ini();
        
        
        if(adj[1].size()==1)
        {
            cout << val[adj[1][0]] << endl;
        }
        else{

            int x = adj[1][0],y = adj[1][1];

            int valx = val[x],valy = val[y];

            vector<int> vx,vy;
            for (int i = 0;i<adj[x].size();i++)
            {
                int now = val[adj[x][i]];
                if(adj[x][i]!=1) vx.push_back(now);
            }

            for (int i = 0;i<adj[y].size();i++)
            {
                int now = val[adj[y][i]];
                if(adj[y][i]!=1) vy.push_back(now);
            }
            sort(vx.begin(),vx.end());
            sort(vy.begin(),vy.end());

            int ans =INT32_MIN;
            if(vx.size()>0)
            {
                ans= max(ans,valy+vx.back());
                //cout << "ue";
            }
            else{
                ans = max(ans,valy+0);
            }
            if(vy.size()>0)
            {
                //cout << "%";
                ans = max(ans,valx+vy.back());
            }

            else{
                ans = max(ans,valx+0);
            }
            cout << ans << endl;
            
        }

        for (int i = 0;i<=n;i++)
        {
            adj[i].clear();
        }
            

        
    
        
    }
    
    return 0;
}