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
        ll n,k;
        cin >> n >> k;

        ll a[n],b[n];

        FL(n)
        {
            cin >> a[i];
        }
        FL(n)
        {
            cin >> b[i];
        }
        vector<pair<ll,ll>> mp;

        FL(n)
        {
            mp.push_back(make_pair(a[i],b[i]));
        }
        sort(mp.begin(),mp.end());

        for (auto i : mp)
        {
            if(i.first<=k)
            {
                k+=i.second;
            }
            else{
                break;
            }
        }
        cout << k  << endl;
    }
    return 0;
}