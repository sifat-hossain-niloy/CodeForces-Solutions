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
            int n;
            cin >> n;

            int a[n],b[n],bar=0,com=0;
            int c[n];

            FL(n) cin >> a[i];
            FL(n) 
            {
                cin >> b[i];

                if(b[i]>a[i])
                {
                    bar+=(b[i]-a[i]);
                    c[i] = b[i]-a[i];
                } 
                    
                else 
                {
                    com+=(a[i]-b[i]);
                    c[i] = (b[i]-a[i]);
                }
                
            }
            if(bar!=com)
            {
                cout << -1 << endl;
            }
            else{
                cout << com << endl;

                for(int i = 0;i<n;i++)
                {
                    
                    for (int j = i+1;j<n;j++)
                    {
                        if(c[i]==0)
                        {
                            break;
                        }
                        if(c[i]>0 && c[j]<0)
                        {
                            while(c[j]!=0 && c[i]!=0)
                            {
                                c[i]--;
                                c[j]++;
                            
                                cout << j+1 << " " << i+1 << endl;
                            }
                        }
                        else if(c[i]<0 && c[j]>0)
                        {
                            while(c[j]!=0 && c[i]!=0)
                            {
                                c[i]++;
                             c[j]--;
                             cout << i+1 << " " << j+1 << endl;      
                            }
                            
                        }
                        
                    }
                }
            }
        }
     
        return 0;
    }

    	