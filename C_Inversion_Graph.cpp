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
        int n;
        cin >> n;

        
        int a[n+1];

        map<int,int> mp;
        int pos[100005];

        for (int i =1;i<=n;i++)
        {
            cin >> a[i];
            mp[a[i]] = i;
            pos[i] = mp[a[i]];
            
        }
        for (int i = 1;i<=n;i++)
        {
            if ( mp[a[i]] < mp[a[i] -1] )
            {
                mp[a[i]] =  mp[a[i]-1] ; 
            
            }
        }
        int res = 0,ans = mp[1],i = 1;
        
        while (i<=n)
        {
            res++; 
            ans = mp[a[i]]; 
            while (i<=ans)
            {
                ans = max (ans,mp[a[i]]); 
                i++; 
            }
        }


        
        
        cout << res  << endl;
        
    }
    return 0;
}