#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

#define MOD 1000000007
#define ll long long
#define TC(t) int t;cin >> t;while (t--)
#define FL(t) for (int i = 0; i < t; i++)
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define ff first
#define ss second
#define pb push_back
#define pf push_front

#define Fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define read freopen("in.txt", "r", stdin)
#define write freopen("out.txt", "w", stdout)

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main()
{
    Fastio

    TC(t)
    {
        int n;
        cin >> n;

        ll a[n];
        FL(n)
        {
            cin >> a[i];
        }
        ll xd[20] = {0}, gun = 1;
        ll ans = 0;

        for (int cnt = 0; cnt < 20; cnt++)
        {
            int temp = 0, i;
            for (i = 0; i < n; i++)
            {
                if (a[i] & 1)
                {
                    temp++;
                }
                else
                {
                    xd[cnt] += ((ll)temp * (ll)(temp + 1) / 2LL);
                    temp = 0;
                }
                a[i] /= 2;
            }
            xd[cnt] += (temp * (temp + 1) / 2LL);
            ans += (xd[cnt] * gun);
            gun *= 2;
        }

        cout << ans << endl;
    }
    return 0;
}