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
            string s;
            cin >> s;

            int l =  s.size(),k;
            int a[26],b[26],c[26]={0};

            FL(26)
            {
                a[i] = 1;
            }

            for(int i = 0;i<l;i++)
            {
                if(s[i]=='a') k = i;

                b[i] = s[i]-'a'+1;
                c[s[i]-'a']++;
            }

            
            bool hobe =  true;

            for (int i = 1;i<k;i++)
            {
                if(b[i]>=b[i-1])
                {
                    hobe = false;
                    break;
                }
            }
            for(int i = k+1;i<l;i++)
            {
                if(b[i]<=b[i-1])
                {
                    hobe= false;
                    break;
                }
            }
            for (int i = 0;i<26;i++)
            {
                if(i>=l && c[i]>0) hobe = false;
                else if(i<l && c[i]>1) hobe = false;
            }
            if(hobe) Y;
            else N;

        }
     
        return 0;
    }