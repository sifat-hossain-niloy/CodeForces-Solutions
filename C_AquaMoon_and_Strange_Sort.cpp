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
        
        TC(t)
        {
            int n,cnt = 1;
            cin >> n;
            int a[n],b[100001],c[100001],d[100001]={0};
            for(int i = 0;i<1e5+1;i++)
            {
                b[i] = 0;
                c[i] = 0;
            }

            FL(n)
            {
                cin >> a[i];
                b[a[i]] +=(i+1) ;
                d[a[i]]++;
            }
            bool hobe =  true;
            for(int i = 0;i<100001;i++)
            {
                if(d[i]!=0)
                {
                    while(d[i]!=0)
                    {
                        c[i] += cnt;
                        cnt++;
                        d[i]--;
                    }
                        int y =  abs(b[i]-c[i]);
                        //cout << b[i] << " % " << i << " " << c[i] << endl;
                        if(y%2)
                        {
                            hobe = false;
                            break;
                        }
                }
            }
            if(hobe) Y;
            else N;

        }
     
        return 0;
    }