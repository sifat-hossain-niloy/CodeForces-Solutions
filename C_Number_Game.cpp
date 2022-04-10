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
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
void f()
{
    cout << "FastestFinger\n";
}
void a()
{
    cout << "Ashishgup\n";
}


int main(){
    
    TC(t)
    {
        ll n;

        cin >> n;
        
        if(n==1) f();
        else if(n%2) a();
        else{
            int m,cnt = 0;
            m = n;
            while(m%2==0){
                cnt++;
                m/=2;
            }
            if(m==1 && cnt>1)
            {
                f();
            }
            else if(n%4==0 )
            {
                a();
            }
            else if(cnt==1)
            {
                if(isPrime(n/2))
                {
                    f();
                }
                else a();
            }
        }

    }

    return 0;
}