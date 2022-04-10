#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#include<vector>
#include<set>

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
using namespace std;
  
bool isPrime(ll n)
{
    
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}


int main(){
    
    TC(t)
    {
        ll n;
        cin >> n;

        bool hobe = false;

        if(isPrime(n)){
            N;
            continue;
        }
        else{
            for(int i = 2;i*i<n;i++)
            {
                if(n%i==0)
                {
                    ll x = n/i;

                    if(!isPrime(x))
                    {
                        for (int j = 2;j*j<x;j++)
                        {
                            if(x%j==0)
                            {
                                ll y = x/j;
                                if(y!=j && y!=i && j!=i)
                                {
                                    Y;
                                    cout << i << " " << y <<  " " << j << endl;
                                    hobe = true;
                                    break;
                                }
                            }
                        }
                    }
                    if(hobe) break;
                }
            }
            if(!hobe) N;
        }
    }

    return 0;
}