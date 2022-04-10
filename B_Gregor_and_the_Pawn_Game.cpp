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
        int n,cnt = 0;
        cin >> n;

        string s1,s2;
        cin >> s1 >> s2;
        s2+='0';

        for(int i = 0;i<n;i++)
        {
            
            if(i && s1[i]=='1')
            {
                if(s2[i-1]=='1')
                {
                    cnt++;
                    s2[i-1]='0';
                }
                else if(s2[i+1]=='1')
                {
                    cnt++;
                    s2[i+1] = '0';
                }
            }
            else if(i==0 && s1[i]=='1'){
                if(s2[i+1]=='1') 
                {
                    cnt++;
                    s2[i+1] = '0';
                }
            }
            if(s1[i]=='0' && s2[i]=='1')
            {
                cnt++;
                s2[i] = '0';
            }
            
            //cout << cnt << " " << i << endl;
            
        }
        cout << cnt << endl;
    }

    return 0;
}