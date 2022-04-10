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
        int n;
        cin >> n;

        ll a[n],rb =INT64_MIN,bb = INT64_MIN,rc = INT64_MAX,bc = INT64_MAX; 
        vector<ll> r,b;
        FL(n)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        ll l = s.size();

        for (int i = 0;i<n;i++)
        {
            if(s[i]=='R')
            {
                r.push_back(a[i]);
                rc = min(rc,a[i]);
                rb = max(rb,a[i]);
            }
            else{
                b.push_back(a[i]);
                bb = max(bb,a[i]);
                bc = min(bc,a[i]);
            }
        }
        if(rb>n || ) 

        
    }
    return 0;
}