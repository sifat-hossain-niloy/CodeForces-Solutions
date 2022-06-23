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


int main(){
    Fastio
    
    int n,m,cnt = 0;
    cin >> n >> m;
    
    map<int,int>mp;
    for (int i = 0;i<m;i++)
    {
        int u,v;
        cin >> u >> v;
        mp[u]++;
        mp[v]--; 
    }
    bool hobe = false;
    for (int i = 1;i<=n;i++)
    {
        if(mp[i]!=0) 
        {
            hobe = true;
            break;
        }
    }
    
    for (int i = 0;i<m;i++)
    {
        if(!hobe && i==0)
        {
            cout << 1 ;
        }
        else cout << 0 ;
    }
    
    return 0;
}