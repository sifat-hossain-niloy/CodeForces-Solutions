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
        ll hc,dc,hm,dm,k,w,a;

        cin >> hc >> dc>>hm>>dm>>k>>w >> a;


        
        bool f = false;
 
		for(int i = 0;i<= k;i++){
			ll c1 = hc + i*a;
			ll d2 = dc + (k-i)*w;
 
			ll v1 = (c1+dm-1)/dm;
			ll v2 = (hm+d2-1)/d2;
 
			if(v1 >= v2){
				f = true;
				break;
			}
		}
        if(f)
        {
            Y;
        }
        else{
            N;
        }
    }
    return 0;
}