#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

#define MOD 1000000007
#define ll long long
#define TC(t)           int t;cin >> t;while(t--)
#define FL(t)           for(int i=0;i<t;i++)
#define Y               cout << "YES\n"
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
        ll a[n],sum = 0,ans = 0;

        map<int,int>mp;
        
        FL(n)
        {
            cin >> a[i];
            sum+=a[i];
        }
        sum*=2;

        if(sum%n)
        {
            cout << 0 << endl;
        }
        else{

            ll req = sum/n;
            for (int i = 0;i<n;i++)
            {
                ans+=mp[req-a[i]];
                mp[a[i]]++;
            }
            cout << ans << endl;
        }
 
    }
    return 0;
}