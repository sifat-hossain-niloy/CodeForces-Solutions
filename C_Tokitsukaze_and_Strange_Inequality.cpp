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
    Fastio
    
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        map<int,int>mp;

        FL(n)
        {
            cin>> a[i];
            mp[a[i]]=i+1;
        }
        ll ans  =0;

        for (int i = n-1;i>0;i--)
        {
            for (int j = i+1;j<=n;j++)
            {
                if(mp[i]<mp[j])
                {
                    for (int k = mp[i]+1;k<mp[j];k++)
                    {
                        for (int l = a[k-1]-1;l>0;l--)
                        {
                            if(mp[l]>mp[j]) ans++;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}