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

ll ans ;

vector<ll> solve(ll h,ll w,const vector<pair<ll,ll>> r) {
    map<pair<ll,ll>,ll> l;

    for (auto r : r)
    {
        auto x = r.first, y = r.second;

        for (int i = -2;i<=0;++i)
        {
            for (int j = -2;j<=0;++j)
            {
                auto u = x+i,v = y+j;

                if(1<=u && u<=h-2 && 1<=v && v<=w-2)
                {
                    ++l[pair<ll,ll>(u,v)];
                }
            }
        }
    }

    vector<ll> ans(10,0);
    for (auto l:l)
    {
        ans[l.second]++;
    }
    ans[0]+=(h-2)*(w-2) - l.size();
    return ans;
}



int main(){

    ll h,w,n;
    cin >> h >> w >> n;

    vector<pair<ll,ll>> pos(n);

    FL(n)
    {
        cin >> pos[i].first >> pos[i].second;
    }

    auto ans  = solve(h,w,pos);

    for (auto ans: ans )
    {
        cout << ans << endl;
    }


    return 0;
}