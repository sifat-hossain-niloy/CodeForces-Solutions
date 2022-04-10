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
        string s;
        cin >> s;

        ll ans = 100,a=0,b=0;

        bool paisi =  false;

        for (int i = s.size()-1;i>=0;i--)
        {
            if(!paisi)
            {
                if(s[i]=='5') paisi = true;
                else a++;
                //cout << "ijsd"<< i << " ";
            }
            else if(paisi)
            {
                if(s[i]=='2' || s[i]=='7') break;
                else a++;
                //cout << "hs"<< i << " ";
            }
        }
        paisi = false;
        for (int i = s.size()-1;i>=0;i--)
        {
            if(!paisi)
            {
                if(s[i]=='0') paisi = true;
                else b++;
            }
            else if(paisi)
            {
                if(s[i]=='5' || s[i]=='0') break;
                else b++;
            }
        }
        ans = min(ans,a);
        ans  =  min(ans,b);
        cout << ans << endl;
    }

    return 0;
}