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

    
    
        ll n,m;
        cin >> n >> m;
        set<int> s;
        vector<pair<int,int>> v[100001];
        vector<pair<int,int>>::iterator it,jt;
        for (int i =0;i<n;i++)
        {
            for (int j = 0;j<m;j++)
            {
                ll x;
                cin >> x;
                s.insert(x);
                v[x].push_back({i,j});
            }
        }
        ll ans = 0;
        for(auto i : s)
        {
            for(int j = 0;j<v[i].size();j++)
            {
                for (int k = j+1;k<v[i].size();k++)
                {
                    ans+=abs(v[i][j].first-v[i][k].first)+abs(v[i][j].second-v[i][k].second); 

                }
            }
            

        }
        cout << ans << endl;
        
    
    return 0;
}