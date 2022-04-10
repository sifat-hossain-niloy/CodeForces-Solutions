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
       int a[n];
       ll b[n],c[n];
       FL(n)
       {
           cin >> a[i];
       }
       ll ans = INT32_MIN;
       b[0] = a[0];
       c[n-1] = a[n-1];
       ans = max(ans,max(b[0],c[n-1]));

       for (int i = 1;i<n;i++)
       {
           b[i]  =b[i-1]*a[i];
           ans = max(ans,b[i]);
       }
       for (int i = n-2;i>=0;i--)
       {
           c[i] = c[i+1]*a[i];
           ans = max(ans,c[i]);
       }
       //cout << ans << endl;
       if(ans <= 0)
       {
           cout << n << " " << 0 << endl;
           continue;
       }
       
       for (int i = 0;i<n;i++)
       {
           if(b[i]==ans)
           {
               cout << 0 << " " << (n-1-i) << endl;
               break;
           }
           else if(c[i]==ans){
               cout << i << " " << 0 << endl;
               break;
           }
       }
       
    }
    return 0;
}