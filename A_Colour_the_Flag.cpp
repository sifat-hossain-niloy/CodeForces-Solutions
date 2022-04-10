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
        
        TC(t)
        {
            int n,m,R = -1 ,W = -1,hobe = 0;
            cin >> n >> m;
            char s[n][m];

            FL(n)
            {
                for (int j = 0;j<m;j++)
                {
                    cin >> s[i][j];
                    if (s[i][j]=='R' && R==-1)
                    {
                        R = (i+j)%2;
                    }
                    else if(s[i][j]=='R' && R!=-1)
                    {
                        if(R^((i+j)%2))
                        {
                            hobe = -1;
                        }
                    }
                    else if(s[i][j]=='W' && W==-1)
                    {
                        W = (i+j)%2;
                    }
                    else if(s[i][j]=='W' && W!=-1)
                    {
                        if(W^((i+j)%2))
                        {
                            hobe = -1;
                        }
                    }
                }
            }
            if (hobe ==-1 || (R==W && (R!=-1 && W!=-1)) )
            {
                N;
            }
            else{
                Y;
                if(R==-1 && W==-1)
                {
                    R=0;
                    W=1;
                }
                else if(R==-1)
                {
                    R = W^1;
                }
                else if(W==-1)
                {
                    W = R^1;
                }
                
                if(R==1)
                {
                    for(int i = 0;i<n;i++)
                    {
                        for (int j = 0;j<m;j++)
                        {
                            if((i+j)%2)
                            {
                                cout<< 'R';
                            }
                            else{
                                cout << 'W';
                            }
                        }
                        cout << endl;
                    }
                }
                else
                {
                    for(int i = 0;i<n;i++)
                    {
                        for (int j = 0;j<m;j++)
                        {
                            if((i+j)%2)
                            {
                                cout<< 'W';
                            }
                            else{
                                cout << 'R';
                            }
                        }
                        cout << endl;
                    }
                }
            }
        }
     
        return 0;
    }