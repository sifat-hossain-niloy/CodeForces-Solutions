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
    
    TC(t)
    {
        ll n,f = 1;
        cin >> n;

        ll a[n][n];
        
        FL(n)
        {
            string s;
            cin >> s;

            for (int j = 0;j<n;j++)
            {
                a[i][j] = s[j] -'0';
            }
        }
        FL(n-1)
        {
            for (int j = 0;j<n-1;j++)
            {
                if(a[i][j]==1 && a[i][j+1]==0 && a[i+1][j]==0)
                {
                    f = 0;
                    break;
                }
                
            }
        }
        if(f) Y;
        else N;
    }
    return 0;
}