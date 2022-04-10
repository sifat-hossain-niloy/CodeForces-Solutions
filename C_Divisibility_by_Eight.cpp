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

    string s;
    vector<ll>v;
    cin >> s;

    int sz = s.size();
    /*for (int i = 0;i<sz;i++)
    {
        int ans = s[i]-'0';
        if(ans%8==0)
        {
            Y;
            cout << s[i] ;
            return 0;
        }
    }
    for (int i = sz-1;i>=0;i--)
    {
        int ans = 0;
        ans = s[i] - '0';
        for (int )
    }*/

    for (int i = sz-1;i>=0;i--)
    {   int ans = 0;
        ans = s[i]-'0';
        if(ans%8==0)
        {
            Y;
            cout << s[i] << endl;
            return 0;
        }
        for (int j = i-1;j>=0;j--)
        {
            ans += (s[j]-'0')*10;
            if(ans%8==0)
            {
                Y;
                cout << s[j]<< s[i] ;
                return 0;
            }
            for (int k = j-1;k>=0;k--)
            {
                ans += (s[k]-'0')*100;
                
                if(ans%8==0)
                {
                    Y;
                    cout << s[k] << s[j] << s[i];
                    return  0;
                }
                ans -= (s[k]-'0')*100;
            }
            ans -= (s[j]-'0')*10;
            
        }
    }
    N;
    return 0;
}