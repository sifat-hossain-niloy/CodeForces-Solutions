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
vector<vector<int>> adj(101); 
int k,ans;


int dfs_timer = 0;

void dfs(int v) {
    
    for (int u : adj[v])
    {
        dfs_timer++;
        if(dfs_timer==k)
        {
            ans++;
            //cout << v << " " << u << endl;
            dfs_timer--;
            continue;
        }
        else if(dfs_timer<k){

            dfs(u);
            dfs_timer--;
        }

    }
}



int main(){
    Fastio
    
    int n,m;
    cin >> n >> m >> k;

    for (int i = 0;i<m;i++)
    {
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    cout << ans << endl;
    
    
    return 0;
}