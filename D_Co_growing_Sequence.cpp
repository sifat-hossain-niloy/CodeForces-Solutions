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
    int O(int n){
        return (1 << n) - 1;
    }
    
    int koyta(int n){
        int cnt = 0, c = n;
    
        while(c != 0){
            ++cnt;
            c/= 2;
        }
 
	    return cnt;
    }
     
    int main(){
        
        TC(t)
        {
            int n;

            cin >> n;
    
            vector<int>x(n),y(n);
    
            FL(n) cin >> x[i];
    
            y[0] = 0;
    
            for(int i=1;i<n;++i){
                int mb = max(koyta(x[i-1]),koyta(x[i]));
                y[i] = x[i] ^ O(mb);
            }
    
            for(int i=0;i<n;i++) cout << y[i] << " ";
    
            cout << endl;
        }
     
        return 0;
    }