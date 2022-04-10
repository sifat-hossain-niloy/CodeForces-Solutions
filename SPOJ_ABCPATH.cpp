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

int fx[] = {-1,0,1,-1,0,1,-1,0,1};
int fy[] = {1,1,1,0,0,0,-1,-1,-1};
int a[51][51];
int dp[55][55];

void dfs(int i,int j) {
    
    if(dp[i][j]==-1)
    {
        dp[i][j] = a[i][j]+1;
        
        for (int k = 0;k<9;k++)
        {
            int x = j+fx[k];
            int y = i+fy[k];

            if(x>=0 && y>=0 && dp[y][x]==-1 && a[i][j]+1 == a[y][x])
            {
                dfs(y,x);
                dp[y][x] = a[y][x]+1;
                
            }
        }
    }
    
}


int main(){

    ll Case = 0;
    while(true)
    {
        
        
        int h,w;
        cin >> h >> w;
        if(h==0 && w==0) 
        {
            break;
        }

        Case++;
        cout <<  "Case " << Case << ": " ;
        
        
        for (int i = 0;i<h;i++)
        {
            string s;
            cin >> s;
            for (int j = 0;j<w;j++)
            {
                a[i][j] = s[j]-'A';
            }
            
        }
        memset(dp,-1,sizeof(dp));

        for (int i = 0;i<h;i++)
        {
            for (int j = 0;j<w;j++)
            {
                if(a[i][j]==0)
                {
                    //dp[i][j] = 1;
                    dfs(i,j);
                }
            }
            
        }
        int ans = 0;
        for (int i = 0;i<h;i++)
        {
            for (int j = 0;j<w;j++)
            {
                ans = max(ans,dp[i][j]);
                //cout << dp[i][j];
            }
            //cout << endl;
            
        }
        cout << ans << endl;
        
    }
    return 0;
}