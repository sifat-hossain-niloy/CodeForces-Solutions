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

       ll a[n],od = 0,ev = 0,cnt = 0,mo = -1;

       FL(n)
       {
           cin >> a[i];

           if(i>0 && i<n-1)
           {
               if(a[i]%2) 
               {
                   od++;
                   cnt+=(a[i]+1);
                   mo = max(mo,a[i]);
               }

               else {
                   ev++;
                   cnt+=a[i];
               }
           } 
       } 

       if( ev>0 || (mo>2 && od>1))
       {
           cout << cnt/2<< endl;

       }
       else {
           cout << -1 << endl;
       }
    }
    return 0;
}