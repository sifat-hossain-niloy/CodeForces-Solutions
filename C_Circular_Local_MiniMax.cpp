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
    //Fastio
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll a[n],b[n];
        FL(n) cin >> a[i];
        sort(a,a+n);
        
        for(int i = 0;i<n/2;i++)
        {
            b[(2*i)%n]=a[i];
        }

        for(int i = n/2;i<n;i++)
        {
            b[(2*i+1)%n]=a[i];
        }
        int h = 0;

        for(int i=0;i<n;i++)
        {
            if(((b[i]>=b[(i-1+n)%n] || b[i]>=b[(i+1)%n]) && (b[i]<=b[(i-1+n)%n] || b[i]<=b[(i+1)%n]) ))
            {
                h = 1;
                break;
            }
        }
        
        if(h)N;
        else{
            Y;
            for (int i = 0;i<n;i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}