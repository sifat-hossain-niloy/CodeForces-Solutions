#include<bits/stdc++.h>
#include<cstring>

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
    
    TC(q)
    {
        string s,t;
        map<string,int> x,y;


        cin >> s >> t;

        for(int i = 0;i<s.size();i++)
        {
            for (int j = i;j<s.size();j++)
            {
                x[s.substr(i,j-i+1)] = j+2;

                string z = s.substr(i,j-i+1);

                reverse(z.begin(), z.end());
                y[z] = j+2;
            }
        }
        bool hobe = false;
        for (int i = 0 ;i<=t.size();i++)
        {
            if(i==0 )
            {
                if(x[t]!=0) hobe = true;
            }
            else if(i==t.size())
            {   if(y[t]!=0) hobe = true;
            }
            else if(x[t.substr(0,i)]==y[t.substr(i-1,1+t.size()-i)] &&  x[t.substr(0,i)]!=0)
            {
                hobe  =  true;
                //cout << i << endl;
                break;
            }
        }
        //cout << x["ahs"] << endl;
        if(hobe) Y;
        else N;
    
    }

    return 0;
}