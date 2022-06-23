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
            res = res * a ;
        a = a * a;
        b >>= 1;
    }
    return res;
}


int main(){
    Fastio
    
    int t;
    cin >> t;

    while(t--)
    {
        int l ,r;
        cin >> l >> r;
        
        ll ans = 0;
        
        for (int sz = 1;sz<=32;sz++)
        {
            ll a  = 0,b = 0,x = 0;
            for (int i = 0;i<32 && a<=r && b<=r;i++)
            {
                if(i%2==0)
                {
                    for (int j = 0;j<sz;j++)
                    {
                        a+=binpow(2,x);
                        cout << sz << " " << i << " " << j<< " " << x <<  " a " << a <<   endl;
                        x++;
                    }
                }
                else{
                    for (int j = 0;j<sz;j++)
                    {
                        b+=binpow(2,x);
                        x++;
                        cout << sz << " " << i << " " << j<< " " << x<<  " b " << b << endl;
                    }
                }

                if(a>=l && a<=r)
                {
                    ans++;
                }
                if(b>=l && b<=r)
                {
                    ans++;
                }
            }
        }
        cout << ans/2 << endl;
    }
    
    return 0;
}