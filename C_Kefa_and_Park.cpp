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
vector<int> adj_list[100005];
bool visited[100005];
int c[100005],n,m;
int ans = 0;

void dfs(int current)
{
    visited[current] = true;

    for  (int next_vertex : adj_list[current])
    {
        if(visited[next_vertex]) continue;
        else{
            if(c[next_vertex]>0 && c[current]>0)
            {
                c[next_vertex] = c[current]+1;
            }
            if(c[next_vertex]>m)
            {
                continue;
            }
            else {
                dfs(next_vertex);
            }
        }
    }
    if(adj_list[current].size()==1 && current!=0)
    {
        ans++;
    }
    
}


int main(){

    cin >> n >> m;
    
    FL(n)
    {
        cin >> c[i];
    }

    for (int i = 0;i<n-1;i++)
    {
        int x,y;
        cin >> x >> y;
        adj_list[x-1].push_back(y-1);
        adj_list[y-1].push_back(x-1);
    }
    dfs(0);

    cout << ans << endl;

    return 0;
}
