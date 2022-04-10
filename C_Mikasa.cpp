#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#include<vector>
#include<set>

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
#define write           freopen("out.txt","w",stdou


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
        ll n, k;
		cin >> n >> k;

		if (k<n){
			cout << 0 << endl;
		}
		else{

			if(((k+1)>>__builtin_ctz(k+1))==1){
				cout << k+1 << endl;
			}
			else
            {
				ll y = (1<<((int)log2(n)+1));

				if (k%y<=(n+1)){
					cout << y*(k/y) << endl;
				}
				else{
					ll temp = y*(k/y);

					map<ll, int> mem;

					for(ll i = temp; i<=k; i++){
						mem[(n^i)]++;
					}

					for(ll i = temp; i<=k; i++){
                        if(!mem[i]){
                        cout << i << endl; 
                        break;
                    }
					}
				}
			}
		}
    }

    return 0;
}