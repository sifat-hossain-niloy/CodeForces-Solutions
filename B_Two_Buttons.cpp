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
bool visited[100005];
int dis[100005];

int dfs(ll n , ll k)
{
    queue<int> q;
    q.push(n);
    visited[n] = 1;
    dis[n] = 0;
    while(!q.empty())
    {
        int x = q.front();
        
        q.pop();
        if(x==k)
        {
            break;
        }
        else{
            if(visited[x-1]==0 && x>0)
            {
                q.push(x-1);
                dis[x-1] = dis[x]+1;
            }
            if(visited[x*2]==0 && x*2 <=2*k)
            {
                q.push(x*2);
                dis[x*2] = dis[x]+1;
            }
            
        }
        visited[x] = 1;
    }
    return dis[k];
}


int main(){

    
    ll n ,k;
    cin >> n >> k;
    ll ans = dfs(n,k);
    cout << ans;
    return 0;
}