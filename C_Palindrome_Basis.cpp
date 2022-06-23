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
bool Pal(int n){
    string s = to_string(n);
    string t = s;
    reverse(t.begin(),t.end());
    return s==t;
}


int main(){
    Fastio

    vector<int> pal;
 
    for(int i = 1;i<=40002;i++){
        if(Pal(i)) pal.pb(i);
    }

    int l = pal.size(); 
 
    vector<vector<int>> dp(l+1,vector<int>(40001,0));
 
    for(  int i=1; i<=l; i++)
    {
        for(int j=0 ; j<=4e4 +1; j++)
        {
            if(j==0)
            {
                dp[i][j]=1; 
                continue;
            }

            if(pal[i-1]<=j) 
            {
                dp[i][j]= (( dp[i][j- pal[i-1]] )%MOD +  ( dp[i-1][j] ) %MOD ) %MOD;
            }
            else 
            {
                dp[i][j]= dp[i-1][j]%MOD;
                dp[i][j] %=MOD;
            }
        }
    }
 
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;

        ll ans = dp[l][n]%MOD;

        if(ans<0) ans+=MOD;

        cout << ans << endl;
    }
    
    return 0;
}