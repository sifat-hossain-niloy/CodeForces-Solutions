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
    Fastio
    
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        ll cnt = 1;
        vector<int> v;

        for (int i = 1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                cnt++;
            }
            else{
                v.push_back(cnt);
                cnt = 1;
            }
        }
        v.push_back(cnt);
        ll sz = v.size(),ans = 0;
        ll b[sz+2] = {0};

        vector<pair<int,pair<int,int>>> ms;
        for (int i = 0;i<sz;i++)
        {
            if(i==0 || i==sz-1) ms.push_back({1,{v[i],i+1}});
            else ms.push_back({0,{v[i],i+1}});
        }

        for (int i = 0;i<sz;i++)
        {
            if(v[i]%2)
            {
                v[i+1]++;
                ans++;
            }
            
        }
        sort(ms.begin(),ms.end());
        //cout << sz << endl;
        cout <<ans << " ";
        /*
        for (auto x: ms)
        {
            cout << x.first <<" oh " << x.second.first << endl;
            
        }*/
        
        for (auto x: ms)
        {
            if(b[x.second.second-1]==0 && b[x.second.second+1]==0 && x.second.first<=ans)
            {
                
                ans-=x.second.first;
                if(x.second.second==1 || x.second.second==sz) sz--;
                else sz-=2;
                b[x.second.second-1]=1 ;
                b[x.second.second+1]=1;
            }
        }
        cout << sz << endl;


    }
    
    return 0;
}