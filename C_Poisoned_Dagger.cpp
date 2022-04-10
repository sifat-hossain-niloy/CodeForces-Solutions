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
        ll n,h,k = -1;
        

        cin >> n >> h;

        ll a[n],cnt = n;
        ll d[n];
    

        FL(n)
        {
            cin >> a[i];
            if(i)
            {
                d[i-1]=(a[i]-a[i-1]);
            }
        }
        d[n-1]=(1000000000000000000);

        sort(d,d+n);

        for (int i = 0; i<n ; i++,cnt--)
        {
            ll x;

            if(h%cnt==0)
            {
                x = h/cnt;
            }
            else{
                x = (h/cnt) +1;
                
            }
            //cout << x << " " << d[i] << endl;
            if(d[i]>=x)
            {
                k = x;
                //cout << "jbf";
                break;
            }
            else{
                h-=d[i];
            }
        }

        cout << k << endl;
        

    }
    return 0;
}