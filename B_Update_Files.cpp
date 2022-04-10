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
        //cout << "case" << t << " " ;
        ll n,k,x = -1 ,f =-1;
        cin >> n >> k;
        ll b[101];
        b[0] = 1;
        

        for (int i = 1;i<101;i++)
        {
            b[i] = b[i-1]*2;

            
            if(b[i-1]>k){
                f = i-1;
                break;
            }
            else if(b[i]>=n)
            {
                x = i;

                break;
            }
        }
        
        if(f!=-1)
        {
            ll ans = f+(n-b[f])/k;
            if((n-b[f])%k) ans ++;
            cout << ans << endl ;
        }
        else{
            for (int i = 0 ;i<101;i++)
            {
                //cout << b[i] << " ";
                if(b[i]>=n) 
                {
                    cout << i << endl;
                    break;
                }
            }
        }
        
    }
    return 0;
}