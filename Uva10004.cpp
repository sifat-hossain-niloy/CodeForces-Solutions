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
#define MAX_N 201




int main(){

    
    while(true)
    {
        int n,l;
        cin >> n ;
        if(n==0) break;
        cin >> l;
        vector<vector<int>> adj(201);

        for (int i = 0;i<l;i++)
        {
            int u,v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);

        }
        int temp = 0;
        int ans[n] ;
        for (int i = 0;i<n;i++) ans[i] = -1;
        int f = 1;

        for (int i = 0;i<n;i++)
        {   
            if(ans[i]!=-1 && ans[i]!=temp) 
            {
                f=-1;
                cout << "ds " << i ; 
                break;
            }

            ans[i] = temp;
            if(adj[i].size()!=0)
            {
                temp++;
                temp=temp%2;
            }

            for (auto j : adj[i])
            {
                
                if(ans[j]==-1)
                {
                    ans[j] = temp;
                }
                else if(ans[j]!=temp)
                {
                    f = -1;
                    cout << " a " << i << " " << j ;
                    break;
                }

            }
            if(f==-1) break;
        }
        if(f==1){
            cout << "BICOLORABLE."<< endl;
        }
        else cout << "NOT BICOLORABLE." << endl;

        
    }
    return 0;
}