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
        ll n,ans = INT_MIN;
        cin >> n;
        ll a[n],b[n];

        vector<set<ll>> s(n);

        FL(n)
        {
            cin >> a[i] >> b[i];
        }
        FL(n)
        {
            ll x = i+1;

            for (int j = x;j<=min(n,x+a[i]);j++)
            {
                s[i].insert(j);
            }
            for (int j = x-1;j>=max(1,x-b[i]);j--)
            {
                s[i].insert(j);
            }

        }
        for (int i = 1 ;i<n;i++)
        {
            if (includes(s[i].begin(), s[i].end(),
                s[i-1].begin(), s[i-1].end()))
            {
                ans = max(ans,s[i-1].size());
            }
            else if(includes(s[i-1].begin(), s[i-1].end(),
                s[i].begin(), s[i].end()))
            {
                ans =  max(ans, s[i].size() );
            }
        }
    
        cout << ans << endl;
    }
    return 0;
}