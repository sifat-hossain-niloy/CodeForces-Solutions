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
       int n,q;
       cin >> n >> q;
       string s;
       cin >> s;
       map<char,int> mp;
       for (int i = 0;i<n;i++)
       {
           mp[s[i]]++;
       }

        while(q--)
        {
            ll l,r;
            char ch;
            cin >> l >> r >> ch;

            int rn = (r-1)/n,ln = (l-1)/n;

            int full = (r-1)/n - (l-1)/n -1;
            //cout << rn << " " << ln<< endl;
            
            full = max(0,full);
            
            int ans = full*mp[ch];
            //cout << full << endl;
            for (int i = l; ; i++)
            {
                if(s[(i-1)%n]==ch)
                {
                    ans++;
                }
                if(i%n==0 ) break;
            }
            for (int i = r; ;i--)
            {
                if(s[(i-1)%n]==ch)
                {
                    ans++;
                }
                if(i%n==1 || i==1) break;

            }
            if(rn==ln)
            {
                ans = 0;
                for (int i = l;i<=r;i++)
                {
                    if(s[(i-1)%n]==ch)
                    {
                        ans++;
                    }
                }
            }
            
            cout << ans << endl;

            
        }
    }
    return 0;
}