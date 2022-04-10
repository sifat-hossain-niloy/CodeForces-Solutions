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
    
    int n,m,cont = 0;
    string s;
    cin >> n >> m >> s ;

    set<char> st;

    for (int i = 0;i<m;i++)
    {
        char x;
        cin >> x;

        st.insert(x);
    }

    vector<ll>sub(n+1);

    for (int i = 0;i<n;i++)
    {
        if(st.count(s[i])) cont++;
        else 
        {
            sub[cont]++;
            //cout << cont << endl;
            cont = 0;
        }
    }
    sub[cont]++;
    unsigned ll ans  = 0;

    for (ll i = 0;i<=n;i++)
    {
        ans+=sub[i]*(i*(i+1))/2LL;
    }
    cout << ans << endl;

    return 0;
}