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
    

    int main(){
        
        int n ,x ;
        string s;
        cin >> n >> x >> s;
        ll a[n];
        
        for (int i = 0;i<n;i++)
        {
            a[i] = s[i]-'a'+1;
        }
        
        ll b[n+1];

        b[0] = 0;

        for(int i = 1;i<=n;i++)
        {
            b[i] = a[i-1]+b[i-1];
        }
        FL(x)
        {
            int l,r;
            cin >> l >>r;

            cout << b[r]-b[l-1] << endl;
        }
     
        return 0;
    }