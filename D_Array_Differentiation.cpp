#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#include<vector>
#include<set>

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
        vector<ll> v(n),diff(n-1);
        set<ll> s;

        for (int i = 0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());

        for(int i = 1;i<n;i++)
        {
            diff[i] = (v[i]-v[i-1]);
            s.insert(v[i]-v[i-1]);
            //cout << diff[i] << " " ;
        }
        for (int i = 0;i<n-1;i++)
        {
            ll curr = diff[i];

            for (int j = i+1;j<n-1;j++)
            {
                curr+=diff[j];
                s.insert(curr);
            }
        }
        cout << s.size();
        if(s.size()>=n) Y;
        else N;


    }

    return 0;
}