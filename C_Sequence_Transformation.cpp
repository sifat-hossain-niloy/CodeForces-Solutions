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
        int n;
        cin >> n;
        int a[n],b[n+1], c[n+1] = {0};
        memset(b,-1,sizeof(b));

        FL(n)
        {
            cin >> a[i];
        }
        b[a[0]] = 1,c[a[0]]++;

        for (int i = 1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {
                c[a[i]]++;
                b[a[i]] = 1;
            }
        }
        for (int i = 1;i<=n;i++)
        {
            if(b[i]==1) c[i]++;
        }
        c[a[0]]--,c[a[n-1]]--;
        int ans = INT_MAX;

        for (int i = 1;i<=n;i++)
        {
            if(b[i]==1)

            {
                ans = min(ans,c[i]);
            }
        }
        cout << ans << endl;
        
    }

    return 0;
}