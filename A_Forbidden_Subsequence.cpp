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
        string s,t;
        cin >> s >> t;

        ll b_age = 1,a[3] = {0};

        if(t[1]=='b' &&  t[2]=='c') b_age = 1;
        else b_age = 0;
        //cout << b_age << endl;
        
        sort(s.begin(),s.end());
        
        if(b_age == 0 || s[0]!='a')
        {
            cout << s << endl;
        }
        else{
            ll cnt  = 0;
            
            for (int i = 0;i<s.size();i++)
            {
                if(s[i]=='b') cnt++;
                
            }
            for (int i = 0;i<s.size();i++)
            {
                if(s[i]>'c')break;
                else if(s[i]=='b') continue;
                else cout << s[i];
            }
            for (int i = 0;i<cnt;i++)
            {
                cout << 'b' ;
            }
            for (int i = 0;i<s.size();i++)
            {
                if(s[i]>'c')
                {
                    cout << s[i];
                }
            }
            cout << endl;
            
        }
    }
    return 0;
}