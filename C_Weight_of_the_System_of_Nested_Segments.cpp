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

typedef pair <ll, ll> xx;
typedef pair <xx, ll> xxx;

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
bool compare(xxx x, xxx y) {
    return x.ss < y.ss;
}
bool compare1(xx x, xx y) {
    return x.ss < y.ss;
}



int main() {


    TC(t)
    {

        ll n, m;

        cin >> n >> m;
        xxx a[m];
        vector<xx> v;

        for (int i = 0; i < m; i++) {
            ll x, y;

            cin >> x >> y;

            a[i] = {{i, x}, y};
        }
        sort(a, a + m, compare);


        int sum = 0;
        for (int i = 0; i < 2 * n; i++) {
            sum += a[i].ss;
            v.push_back({a[i].first});
        }


        sort(v.begin(), v.end(), compare1);

        cout << sum << endl;

        int l = 0, r = 2 * n - 1;

        while (l < r) {
            cout << v[l].first+1 << " " << v[r].first+1 << endl;
            l++; r--;
        }

        cout << endl;

    }
    return 0;
}