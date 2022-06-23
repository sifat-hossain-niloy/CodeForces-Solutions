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
ll cnt(string s)
{
    ll sum = 0;
    for (int i = 0;i<s.size()-1;i++)
    {
        sum+=((s[i]-'0')*10 + s[i+1]-'0');
    }
    return sum;
}


int main(){
    Fastio
    
    int t;
    cin >> t;
    while(t--)
    {
        int n,k; cin >> n >> k;

        string s;
        cin >> s;
        

        ll f =-1,l = -1;

        for (int i = 0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(f==-1)
                {
                    f = i;
                    l = i;
                }
                else{
                    l = i;
                }
            }
        }
        if(l==f && f!=-1)
        {
            if(n-1-l<=k)
            {
                swap(s[f],s[n-1]);
            }
            else if(f<=k)
            {
                swap(s[0],s[f]);
            }
        }
        else if(l!=f){
            if(n-1-l<=k)
            {
                swap(s[l],s[n-1]);
                k-=(n-1-l);
            }
            if(f<=k)
            {
                swap(s[f],s[0]);
                k-=f;
            }
        }
        ll ans = cnt(s);
        cout << ans << endl;
        
    }
    
    return 0;
}