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

    
    
    
    int n;
    cin >> n;

    ll a[n];
    FL(n)
    {
        cin >> a[i];
    }
    FL(n)
    {
        ll x = a[i];
        if(x == 0) 
        {
            cout<<"0 "; 
            continue;
        }
        ll  y = 0 , z = 0,w =1;
        y = 32768 - a[i];


        while(x != 0){
            x = (x*2)%32768; 
            z++;
        }

        x = a[i]+1;
        while(x != 0){
            x = (x*2)%32768; 
            w++;
        }
        ll ans = min(min(y,z),w);
        
        cout << ans << " ";
        }
        cout<<endl;
    return 0;
}