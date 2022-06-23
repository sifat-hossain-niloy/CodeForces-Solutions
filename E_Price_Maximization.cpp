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
        int n,k;
        cin >> n >>k;

        ll a[n];
        vector<int> v[k+3];
        FL(n)
        {
            cin >> a[i];
            v[a[i]%k].push_back(a[i]);
        }
        for (int i = 0;i<k;i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        ll ans = 0;
        
        for (int i = 1;i<(k+1)/2;i++)
        {
            ll temp = 0;
            if(!v[i].empty())
            {
                while(!v[i].empty() && !v[(k-i)].empty())
                {
                    temp+=v[i].back();
                    temp+=v[(k-i)].back();
                    v[i].pop_back();
                    v[(k-i)].pop_back();
                    ans+=(temp/k);
                    temp = 0;
                }
                continue;

            }
        }
        ll cnt = 0,temp = 0;
        for (int i = 0;i<k;i++)
        {
            while(!v[i].empty())
            {
                temp+=v[i].back();
                v[i].pop_back();
                cnt++;
                if(cnt==2)
                {
                    ans+=(temp/k);
                    temp = 0;
                    cnt = 0;
                }
            }
        }
        cout << ans << endl;
        

        
    }
    
    return 0;
}