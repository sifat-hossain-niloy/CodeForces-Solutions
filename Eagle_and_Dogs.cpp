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
vector<vector<int>> adj(100005);
map<pair<int,int>, int> mp;

vector<bool> visited(100005);
ll sum,ans;


ll dfs(int v) {
    
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
        {
            ans+=mp[{u,v}];
            sum = max(sum,ans);
            dfs(u);
            visited[u] = false;
            ans-=mp[{u,v}];

        }
            
    }
    visited[v] =false;
    return sum;
}



int main(){

    
    TC(t)
    {
        int n;
        cin >> n;
        for (int i = 0;i<n-1;i++)
        {
            int x,y,z;
            cin >> x >> y>> z;
            adj.clear();


            adj[x].push_back(y);
            adj[y].push_back(x);
            mp[{x,y}] = z;
            mp[{y,x}] = z;
            //cout << mp[{x,y}] << endl;
        }
        
        for (int i = 1;i<=n;i++)
        {
            cout << dfs(i) <<" ";
            sum = 0;
            //memset(visited,false,sizeof(visited));
            //visited.clear();
        }

        
    }
    return 0;
}