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
     
    int main(){
        
        int n,l,r = -1;
        cin >> n;

        ll a[n],cnt = 0;

        FL(n) cin >> a[i];

        bool hobe = true;
        

        for (int i = 1;i<n;i++)
        {
            if(hobe && a[i]<a[i-1])
            {
                cnt++;
                hobe =  false;
                l= i;
            }
            else if(!hobe && a[i]>a[i-1])
            {
                hobe = true;
                r = i;
            }
        }
        if(cnt==1)
        {
            if(r==-1) r = n;
            cout << "yes\n" << l << " " << r << endl;
        }
        else if(cnt==0)
        {
             cout << "yes\n" << 1 << " " << 1 << endl;
        }
        else{
            cout << "no\n";
        }
        return 0;
    }