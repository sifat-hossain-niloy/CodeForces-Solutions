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

ll dp[50500];

int main(){
    //Fastio
    
    int k,p;
    cin >> k >> p ;
    dp[0] = 1;

    FL(p)
    {
        int x;
        cin >> x;
        for (int j = x;j<=50500;j++)
        {
            if(dp[j-x]) dp[j] = 1;
        }
    }
    
    for (int i = 0;i<k;i++)
    {
        int x;
        cin >> x;
        int ans = -1;

        for (int j = x;j<=50500;j++)
        {
            if(dp[j]==1)
            {
                ans = j;
                break;
            }
        }
        cout << ans-x << endl;
    }
    

    return 0;
}