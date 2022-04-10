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
        ll x,n;
        cin >> x >> n;

        ll res = n%4,div = n/4;
        if(x%2==0)
        {
            if(res==0){
                cout << x ;
            }
            else if(res==1)
            {
                cout<< x-(1+4*div);
            }
            else if(res==2)
            {
                cout << x+1 ;
            }
            else{
                cout << x+4*(div+1);
            }
            cout << endl;
        }
        else{
            if(res==0){
                cout << x ;
            }
            else if(res==1)
            {
                cout<< x+(1+4*div);
            }
            else if(res==2)
            {
                cout << x-1 ;
            }
            else{
                cout << x-4*(div+1);
            }
            cout << endl;
        }
    }
    return 0;
}