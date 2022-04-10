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

        
        int t;
        cin >> t;
        for (int tt = 1;tt<=t;tt++)
        {
            int r,c;
            cin >> r >> c;
            cout << "Case #" << tt << ":\n";

            char a[2*r+1][2*c+1];

            a[0][0] = '.';
            a[0][1] = '.';
            a[1][0] = '.';
            a[1][1] = '.';

            for (int i = 0;i<2*r+1;i++)
            {
                for (int j = 0;j<2*c+1;j++)
                {
                    if(a[i][j]!='.')
                    {
                        if(i%2)
                        {
                            if(j%2)
                            {
                                a[i][j] = '.';
                                
                            }
                            else{
                                a[i][j] = '|';
                            }

                        }
                        else{
                            if(j%2)
                            {
                                a[i][j] = '-';
                            }
                            else{
                                a[i][j]='+';
                            }
                        }
                    }
                }
            }
            int cnt = 0;
            for (int i = 0;i<2*r+1;i++)
            {
                for (int j = 0;j<2*c+1;j++)
                {
                    cout << a[i][j];
                    if(a[i][j]=='.')cnt++;
                }
                cout << endl;
            }/*
            if(cnt== r*c+3) Y;
            else N;*/

            
        }
        return 0;
    }