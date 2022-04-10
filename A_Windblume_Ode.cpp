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
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
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
        int n,sum = 0;
        cin >> n;

        vector<int> o,e;

        FL(n)
        {
            int x;
            cin >> x;
            sum+=x;
            if(x%2)
            {
                o.push_back(i);
            }
            else e.push_back(i);
        }
        int od = o.size();
        int ev = e.size();

        if(od%2 && isPrime(sum))
        {
            cout << n-1 << endl;
            for(int x : e)
            {
                cout << x+1 << " ";
            }
            for (int i = 0 ;i<od-1;i++)
            {
                cout << o.back()+1 << " ";
                o.pop_back();
            }
            cout << endl;
        }
        else 
        {
            cout << n << endl;
            for(int x : e)
            {
                cout << x+1 << " ";
            }
            for(int x : o)
            {
                cout << x+1 << " ";
            }
            cout << endl;
        }


    }

    return 0;
}