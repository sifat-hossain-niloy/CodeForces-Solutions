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
    
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;

        ll a[n][m];
        for (int i = 0;i<n;i++)
        {
            for (int  j = 0;j<m;j++)
            {
                cin >> a[i][j];
            }
        }
        ll ma = INT32_MIN;
        int h,w;
        
        for (int i = 0;i<n;i++)
        {
            for (int  j = 0;j<m;j++)
            {
                if(a[i][j]>ma)
                {
                    h = i;
                    w = j;
                    ma = a[i][j];
                }
            }
        }
        h++;
        w++;
        h = max(h,n+1-h);
        w = max(w,m+1-w);
        cout << h*w << endl;
    }
    
    return 0;
}