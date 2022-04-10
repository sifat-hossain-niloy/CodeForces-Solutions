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
        ll n,k,ans = 0;
        cin >> n >> k;

        vector<ll> pos,neg;

        FL(n)
        {
            ll x;
            cin >> x;

            if(x<0) neg.push_back(x);
            else pos.push_back(x);
        }
        sort(pos.begin(),pos.end());
        sort(neg.rbegin(),neg.rend());

        ll ki = 0,now = 0;

        for(ll i : pos)
        {
            if(ki==k)
            {
                ki = 0;
                ans+=(now);
                now = 0;
            }
            ans+=(abs(now-i));
            ki++;
            now = i;
            
        }
        
        for (ll i: neg)
        {
            if(ki==k)
            {
                ki = 0;
                ans+=abs(now);
                now = 0;
            }
            if(now>0)
            {
                ki=0;
            }
            ans+=abs(now-i);
            ki++;
            now = i;
            
        }

        //part 2;

        sort(pos.rbegin(),pos.rend());
        sort(neg.begin(),neg.end());

        ll ans2 = 0;
        
        ki = 0,now = 0;

        for(ll i : pos)
        {
            if(ki==k)
            {
                ki = 0;
                ans2+=(now);
                now = 0;
            }
            ans2+=(abs(now-i));
            ki++;
            now = i;
            
        }
        for (ll i: neg)
        {
            if(ki==k)
            {
                ki = 0;
                ans2+=abs(now);
                now = 0;
            }
            if(now>0)
            {
                ki=0;
            }
            ans2+=abs(now-i);
            ki++;
            now = i;
            
        }
        cout << min(ans,ans2) << endl;
    }
    return 0;
}