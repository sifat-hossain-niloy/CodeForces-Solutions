#include<bits/stdc++.h>

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
        int n;
        cin >> n;
        vector<ll> v;

        ll a[n];

        FL(n) 
        {
            cin >> a[i];
        }
        if(n%2)
        {
            cout << "Mike\n";
        }
        else 
        {
            int mike = 1e9 +1,pos = -1;

            for (int i = 0;i<n;i++)
            {
                if(a[i]<mike){
                    mike = a[i];
                    pos = i;
                }
                
            }
            for (int i = 0;i<n;i++)
            {
                if(a[i]==mike){
                    v.push_back(i);
                }
                
            }
            sort(v.rbegin(),v.rend());
            
            
            // for (int i = 0;i<n;i+=2)
            // {
            //     if(a[i]<a[i+1])
            //     {
            //         mike = 0;
            //     }
            // }
            if(v.back()%2)
            {
                cout << "Mike\n";
            }
            else cout << "Joe\n";
        }


        
    }
    
    return 0;
}