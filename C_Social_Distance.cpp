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
        //cout << t << " jhaj ";
        ll n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<ll>v;

        ll cnt = 0,f =-1,ans = 0,o=0;
        
        FL(n)
        {
            if(s[i]=='1')
            {
                if(f==-1 || i==n-1)
                {
                    v.push_back(cnt);
                    cnt = 0;
                    f = 0;
                }
                else{
                    ans+=((cnt-k) / (k+1) );
                    //cout << i  << " "<< ans << endl ;
                    cnt = 0;
                }
                o++;
            }
            else{
                cnt++;
                if(i==n-1)
                {
                    v.push_back(cnt);
                }
                
            } 
        }
        for (ll i : v)
        {
            ans+=((i) / (k+1) );
            //cout << i  << " "<< ans << endl ;
        }
        
        
        if(o==0)
        {
            ans = max(ans,1LL);
        }
        cout << ans << endl;
        
    }
    return 0;
}

