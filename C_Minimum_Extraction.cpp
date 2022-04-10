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
        //cout << "case" << t << " ";
        ll n,p = 0,m = 0,ans = -1000000000;
        cin >> n;

        ll a[n];

        FL(n)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        if(n==1)
        {
            cout << a[0] << endl;
            continue;
        }

        ans = max(ans,a[0]);
        m +=a[0];
        //cout << a[0] << " ";
        for (int i = 1;i<n-1;i++)
        {   
            
            a[i] -=m;
            m+=a[i];

            ans = max(ans,a[i]);
            //cout << a[i] << " " ;

        }
        a[n-1]-=m;
        ans = max(ans,a[n-1]);

        
        cout << ans << endl;
    }
    return 0;
}