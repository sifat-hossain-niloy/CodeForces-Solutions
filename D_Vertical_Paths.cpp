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


vector<bool> used(200001);

vector<vector<int>> adj(200001);  


vector<string> ss;
string s="";

void dfs(int v) {
    s+=to_string(v);
    //cout << v <<  " ";
    used[v] = 1;
    

    for (int u : adj[v])
    {
        
        if (used[u] == 0)
        {
            //s+=to_string(u);
            dfs(u);
            //used[u] = 1;
        }
    }
    
    if(s.size()!=0)ss.push_back(s);
    s = "";


}


int main(){
    //Fastio
    
    int t;
    cin >> t;
    while(t--)
    {   
        int n;
        cin >> n;

        int root;

        for (int i = 1;i<=n;i++)
        {
            adj[i].clear();
        }
        //used.swap(vector<bool> ());
        //used.clear();
        //memset(used,0,sizeof(used));
        used.assign(used.size(), 0);
        ss.clear();

        for (int i = 1;i<=n;i++)
        {
            int x;
            cin >> x;

            if(x==i)
            {
                root  = i;
            }
            else{
                adj[i].push_back(x);
                adj[x].push_back(i);
            }
        }/*
        for (int i = 1;i<=n;i++)
        {
            cout << i << " : ";
            for (auto x : adj[i])
            {
                cout << x << " ";
            }
            cout << endl;
        }*/
        //cout << root << endl;

        dfs(root);
        //cout << endl;

        cout << ss.size()<< endl;

        for (auto s : ss)
        {
            cout << s.size() << endl;
            for (int i = 0;i<s.size() ;i++)
            {
                cout << s[i] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}