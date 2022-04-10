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
vector<vector<int>> in(100005),out(100005);
bool visited[100005];
ll ans;
int f[100005];
int cnt[100005];

void bfs(int s)
{
    queue<int> q;
    
    q.push(s);

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        //used[v] = true;
        
        for (int u : adj[v]) {
        {
            if (!visited[u] && cnt[u]==0) {
                dfs(u);
                visited[u] = true;
            }
            else if(!visited[u])
            {
                q.push(u);
            }
        }
        
    }
}
void dfs(int v)
{

}


int main(){

    
    int t;
    cin >> t;
    for (int tt = 1;tt<=t;tt++)
    {
        cout << "Case #" << tt << ":\n";
        
        int n;
        cin >> n;
        ans = 0;
        in.clear();
        out.clear();
        memset(visited,false,sizeof(visited));

        
        FL(n)
        {
            cin >> f[i];
        }
        for (int i = 1;i<=n;i++)
        {
            int x;
            cin >> x;
            in[i].push_back(x);
            out[x].push_back(i);
            cnt[x]++;
        }
        bfs(0);



    }
    return 0;
}