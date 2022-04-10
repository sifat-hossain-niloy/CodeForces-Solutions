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
    
    TC(t)
    {
        int n,cnt = 0,last = 0;
        char ch ;
        cin >> n >> ch;
        string s ; 
        cin >> s;

        for (int i = 0 ;i<n;i++)
        {
            if(s[i]!=ch) 
            {
                cnt++;
            }
            else{
                last= i+1;
                
            }
        }

        if(cnt==0)
        {
            cout << 0 << endl;
        }
        
        else if(s[n-1]==ch)
        {
            cout << 1 << endl << n << endl;
        }
        else if( last >n/2 )
        {
            cout << 1 << endl << last << endl;
        }
        else 
        {
            cout << 2 << endl << n-1 << " " << n << endl;
        }
    }

    return 0;
}