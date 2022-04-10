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
ll hobe(string s,char ch)
{

}

int main(){
    
    TC(t)
    {
        int n,ans = 0;
        cin >> n;
        string s;
        cin >> s;
        ll l = 0,r = n-1;
        char ch = '0';

        while(l<r)
        {
            if(s[l]==s[r])
            {
                l++;
                r--;
            }
            else if(s[l]!=s[r-1]&& s[l+1]!=s[r])
            {
                break;
            }
            else if(s[l]==s[r-1] )
            {
                if(ch!='0')
                {
                    ch = s[r];
                    ans++;
                    r--;
                }
                else if (ch==s[r]) {
                    ans++;
                    r--;
                }
                else if(ch!=s[r] && s[l+1]!=s[r])
                {
                    break;
                }
            }
            else if(s[l+1]==s[r] )
            {
                if(ch!='0')
                {
                    ch = s[r];
                    ans++;
                }
                else if (ch!=s[r]) {
                    
                }
            }
        }

        
    }

    return 0;
}