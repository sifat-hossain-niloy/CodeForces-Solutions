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
        
        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        int x = s[0] - 96,temp = n;
        bool hobe =  false;

        for (int i = 1;i<n;i++)
        {
            int y = s[i] - 96;
            
        }
        s = s.substr(0,temp);
        
        string result = s;

        int l = result.size();

        for(int i = 0;i<=ceil(k/l);i++)
        {
            result+=s;
        }

        cout << result.substr(0,k);
     
        return 0;
    }