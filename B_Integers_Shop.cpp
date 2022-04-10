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
        ll n;
        ll ml = 1e9,mr = 0;
        cin >> n;

        map<ll,ll> L , R;
        map<pair<ll,ll>,ll> mp;

        FL(n)
        {
            ll a,b,c;
            cin >> a >> b >> c;
            
            if(L.find(a)!=L.end())
            {
                L[a] = min(L[a],c);
            }
            else {
                L[a] =c;
            }
            if(R.find(b)!=R.end())
            {
                R[b] = min(R[b],c);
            }
            else {
                R[b] = c;
            }

            ml = min(ml,a);
            mr = max(mr,b);

            if(mp.find({a,b})!=mp.end())
            {
                mp[{a,b}] = min(mp[{a,b}],c);
            }
            else {
                mp[{a,b}] = c;
            }

            ll ans  = L[ml]+R[mr];
            if(mp.find({ml,mr})!=mp.end())
            {
                ans =  min(ans,mp[{ml,mr}]);
            }

            cout << ans << endl;

        }

    }
    return 0;
}