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
string s;
ll ans;



int main(){

    
    TC(t)
    {
        cin >> s;
        ll sz = s.size();
        map<int,int>mp;

        
        for (int i = 0;i<sz;i++)
        {
            mp[s[i]-'a']++;
        }
        ll l = 0,r = sz-1,ans = 0;
        if(sz == 1){
            cout << 1 << endl;
            continue;
        }

        while(l<r){
            if(s[l]==s[l+1]){
                mp[s[l]-'a']-=2;
                l+=2;
                continue;
            }
            if(s[r]==s[r-1]){
                mp[s[r]-'a']-=2;
                r-=2;
                continue;
            }
            else{
                int cnt = r-l+1;
                int ma = -1;
                for (int i = 0;i<27;i++)
                {
                    ma = max(ma,mp[i]);
                }
                cnt = cnt-ma+ma%2;
                ans = cnt;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}