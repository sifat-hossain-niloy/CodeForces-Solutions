#include<bits/stdc++.h>

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
    Fastio
    
    int t = 1;
    while(t--)
    {
        int n;
        cin >> n;
        ll a[n];
        ll b[n+1];
        b[0] = 0;
        FL(n) 
        {
            cin >> a[i];
            b[i+1] = b[i]+a[i];
        }

        if(b[n]%3!=0)
        {
            cout<< 0 << endl;
            continue;

        }
        vector<int> x,y;
        
        for (int i = 1;i<n-1;i++)
        {
            if(b[i]==b[n]/3){
                x.push_back(i);
            }
        }
        for (int i = n;i>2;i--)
        {
            if((b[n]-b[i-1])==b[n]/3)y.push_back(i);
        }

        ll ans = 0;

        for (int i:x)
        {
            for (int j:y)
            {
                if(j>i+1) ans++;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}