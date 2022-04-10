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
map<int,int> mp1,mp2;

int main(){
    
    TC(t)
    {
        int n;
        cin >> n;
        int v[2001][n];

        for(int i = 0;i<n;i++)
        {
            int x;
            cin >> x;
            v[0][i] = x;
            mp1[x]++;
        }
        for (int i = 1;i<=2000;i++)
        {
            for (int j = 0;j<n;j++)
            {
                if(i%2)
                {
                    v[i][j] = (mp1[v[i-1][j]]);
                    mp2[v[i][j]]++;
                }
                else{
                    v[i][j] = (mp2[v[i-1][j]]);
                    mp1[v[i][j]]++;
                }
            }
            if(i%2) 
            {
                mp1.clear();
            }
            else{
                mp2.clear();
            }
        }

        int m ;
        cin >> m;
        
        while(m--)
        {
            int a , b;
            cin >> a >> b;

            if(b>=2000)
            {
                cout << v[2000][a] << endl;
            }
            else{
                cout << v[b][a] << endl;
            }
        }
    }
    return 0;
}