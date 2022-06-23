#include<bits/stdc++.h>

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
    Fastio
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string x,y;
        cin >> x >> y;
        map<char,int> mp;
        vector<int> v(n,0);

        for (int i = 0;i<n;i++)
        {
            mp[x[i]]++;
            if(x[i]=='a') mp['b']=0;
            if(x[i]=='c') mp['a']=0;
            
            if(mp[y[i]]>0) 
            {
                mp[y[i]]--;
                v[i] = 1;
            }

        }
        mp['a'] = 0;
        mp['b'] = 0;
        mp['c'] = 0;
        for (int i = n-1;i>=0;i--)
        {
            mp[x[i]]++;
            if(x[i]=='a') mp['c']=0;
            if(x[i]=='c') mp['b']=0;
            
            if(mp[y[i]]>0) 
            {
                mp[y[i]]--;
                v[i] = 1;
            }

        }
        int hobe = 1;
        for (int i = 0;i<n;i++)
        {
            if(v[i]==0)
            {
                hobe = 0;
                //break;
            }
        }
        if(hobe) Y;
        else N;

    }

    
    return 0;
}