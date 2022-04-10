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

        vector<ll>v(n),d;

        FL(n)
        {
            cin >> v[i];
        }
        ll temp = v[0],dif = INT64_MIN;
        for (int i = 1;i<n;i++)
        {
            
            temp = max(temp,v[i]);
            if(temp>v[i])d.pb(temp-v[i]);
        }
        sort(d.rbegin(),d.rend());
        if(d.size()==0)
        {
            cout << 0 << endl;
        }
        
        for (auto x: d)
        {
            int ans = 0,cnt = 1;
while(x>aaaaaa 0)
            {
                ans++;
                x-=cnt;
                cnt*=2;
            }
            cout << ans << endl;
            break;
        }
        
    }
    return 0;
}