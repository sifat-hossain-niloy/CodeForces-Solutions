#include<bits/stdc++.h>
#include<queue>

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

map<int,int> mp,cnt;

int main(){

    
    TC(t)
    {
        int n;
        cin >> n;

        ll a[n],sum = 0;
        
        FL(n)
        {
            cin >> a[i];
            cnt[a[i]]++;
            sum +=a[i];
        }
        if(n==1)
        {
            cout << "YES\n";
            continue;
        }
        
        queue<int>q;
    
        q.push(sum);
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            if(mp[u]!=0){
                continue;
            }
            if(u%2==0)
            {
                int x = u/2;
                mp[x] = x;
                q.push(x);
            }
            else{
                int x = u/2;
                int y = u/2 +1;
                mp[x] = y;
                if(mp[y]<x) mp[y] = x;
                q.push(x);
                q.push(y);
            }
        }
        bool hobe = true;
        

        for (int i = 0 ;i<n;i++)
        {
            if(mp[a[i]]==0)
            {
                hobe = false;
                break;
            }
            else if(cnt[mp[a[i]]]==0){
                hobe = false;
                break;
            }
            else /*if(a[i]<=mp[a[i]])*/{
                cnt[a[i]]--;
                cnt[mp[a[i]]]--;
                cnt[a[i]+mp[a[i]]]++;
            }
        }
        if(hobe)Y;
        else N;
        
    }
    return 0;
}