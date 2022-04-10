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
int cnt[18];


int main(){

    
    TC(t)
    {
        int l,r;
        cin >> l >> r;

        int a[r+1];
        FL(r+1)
        {
            cin >> a[i];
        }
        memset(cnt,0,sizeof(cnt));
        for (int i = 0;i<=r;i++)
        {
            int j = 0;
            int x = i;
            while(x>0)
            {
                if(x&1)
                {
                    cnt[j]++;
                }
                j++;
                x>>=1;
            }
        }
        for (int i = 0;i<=r;i++)
        {
            int j = 0;
            int x = a[i];
            while(x>0)
            {
                if(x&1)
                {
                    cnt[j]--;
                }
                j++;
                x>>=1;
            }
        }
        int temp = 1,ans = 0;
        for (int i = 0;i<18;i++)
        {
            if(cnt[i]<0){
                ans+=temp;
            }
            temp*=2;
        }
        cout << ans << endl;

        
        
    }
    return 0;
}