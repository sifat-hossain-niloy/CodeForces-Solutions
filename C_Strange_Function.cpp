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
    ll rec(ll n)
    {
        ll x = n/2;
        if(n==1) return 2;
        else if(n==2) return 5;
        else if(n==3) return 7;
        else if(n==4) return 10;
        else if(n==5) return 12;

        else if(n%2 && x%2)
        {
            return (rec(x)+rec(x +1))%MOD;
        }
        else if(n%2 && x%2==0)
        {
            return (rec(x)+rec(x +1)+1)%MOD;
        }
        else  if(n%2==0 && x%2==0)
        {
            return ((2*rec(x) )+1)%MOD;
        }
        else{
            return (2*(rec(x)+1))%MOD;
        }

    }
     
    int main(){
        
        TC(t)
        {
            ll n;
            cin >> n;
            cout << rec(n) << endl;
        }
     
        return 0;
    }