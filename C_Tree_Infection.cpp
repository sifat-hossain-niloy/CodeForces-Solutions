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
#define pib pair<int,bool>

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
        int n;
        cin >> n;
        map<int,int>mp;

        for (int i = 0;i<n-1;i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        
        priority_queue<ll> q1,q2;
        int sz = 0;

        for (int i = 1;i<=n;i++)
        {   
            if(mp[i]>0){
                
                q1.push(mp[i]);
                sz++;
            }
        }
        sz++;
        q1.push(1);

        int cnt = 0,ans = 0;
        while(!q1.empty())
        {
            //cout << q1.top() <<  " ";
            if(q1.top()-sz+cnt >0)
            {
                q2.push(q1.top()-sz+cnt);
                
            }
            q1.pop();
            cnt++;
            ans++;

        }
        while(!q2.empty())
        {
            if(q2.top()-2>0)
            {
                q1.push(q2.top()-2);
            }
            q2.pop();

            while(!q2.empty())
            {
                if(q2.top()-1>0)
                {
                    q1.push(q2.top()-1);
                }
                q2.pop();
            }

            while(!q1.empty())
            {
                q2.push(q1.top());
                q1.pop();
            }
            ans++;
        }

        cout << ans <<  endl;
        
           
    }
    return 0;
}



