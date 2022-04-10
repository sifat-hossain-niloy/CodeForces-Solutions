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
        int n,curr = 0;
        cin >> n;

        int a[n][5];

        for(int i = 0;i<5;i++)
        {
            cin >> a[0][i];
        }
        for (int i = 1; i<n ; i++)
        {
            int cnt = 0;
            for (int j = 0;j<5;j++)
            {
                cin >> a[i][j];
                if(a[i][j]<a[curr][j]) cnt++;
            }
            if(cnt>2) curr = i;
            //cout << curr << " " << cnt << endl;
        }
        int ans = curr +1;
        //cout << "now got " << ans << " then " ;

        for(int i = 0;i<n;i++)
        {
            int cnt = 0;
            for(int j = 0;j<5;j++)
            {
                if(a[i][j]<a[curr][j])cnt++;
            }
            if(cnt>2) ans = -1;
        }
        //cout << endl;

        cout << ans << endl;
        
    }

    return 0;
}