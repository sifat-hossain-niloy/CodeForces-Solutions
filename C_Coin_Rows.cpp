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


int main(){
    
    TC(t)
    {
        
        int n,cnt = -1;
        cin >> n;

        ll a[n],b[n],c[n],d[n];
        a[0] = 0;

        FL(n)
        {
            cin >> c[i];
            if(i) a[i] = c[i]+a[i-1];
            //cout << a[i] << " " ;
        }
        //cout << endl;

        FL(n)
        {
            cin >> d[i];
            if(i) b[i] = d[i]+b[i-1];
            else b[i] = d[i];
            if(i==n-1) b[i] = b[i-1];
            //cout << b[i] << " ";
        }
        //cout << endl;
    

        FL(n-1)
        {
            if((a[n-1]-a[i])<(b[n-2]))
            {
                cnt = i;
                break;
            }
        }
        //cout << "cnt " << cnt << " " << endl;
        if(cnt == -1 && n<2)
        {
            cout << 0 << endl;
        }
        else if(cnt== -1)
        {
            cout << b[n-2] << endl;
        }
        else{
            ll ans1 = 0,ans2 = 0;

            for(int i = cnt+1;i<n;i++)
            {
                ans1+=c[i];
            }
            for (int i = 0;i<cnt;i++)
            {
                ans2=b[i];
            }
            cout << max(ans1,ans2) << endl;
        }
    }

    return 0;
}