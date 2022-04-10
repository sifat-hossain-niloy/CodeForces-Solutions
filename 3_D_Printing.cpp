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

    
    int t;
    cin >> t;
    for (int tt = 1;tt<=t;tt++)
    {
        cout << "Case #" << tt << ": ";
        int ans[4];

        for (int i = 0;i<4;i++)
        {
            ans[i] = INT32_MAX;
        }
        for (int i = 0;i<3;i++)
        {
                int c,m,y,k;
                cin >> c >> m >> y >> k;

                ans[0] = min(ans[0],c);
                ans[1] = min(ans[1],m);
                ans[2] = min(ans[2],y);
                ans[3] = min(ans[3],k);
            
        }
        int sum = ans[0]+ans[1]+ans[2]+ans[3];
        if(sum<1000000)
        {
            cout << "IMPOSSIBLE\n";
        }
        else{
            int dorkar = 1000000;
            int a[4] = {0};
            int i = 0;

            while(dorkar>0)
            {
                a[i] = min(dorkar,ans[i]);
                dorkar-=min(dorkar,ans[i]);
                i++;
            }
            for (int i = 0;i<4;i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}