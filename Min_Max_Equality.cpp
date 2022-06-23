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
        int n,k;
        cin >> n >>k;

        int a[n+2];
        for(int i = 1;i<=n;i++)
        {
            cin >> a[i];
        }

        a[0] = a[1];
        a[n+1] = -1;
        //cout << a[0] << a[1];

        int cnt = 0;
        
        priority_queue<int> q;
        for (int i = 1;i<=n+1;i++)
        {
            if(a[i]==a[i-1])
            {
                cnt++;
            }
            else{
                q.push(cnt);
                cnt = 1;
                continue;
            }
            

        }/*
        while(!q.empty())
        {
            //ans+=(binpow(2,q.top())-1);
            cout << q.top() << " ";
            q.pop();
        }*/

        int i = 0;
        
        while(i<k)
        {
            i++;
            ll x = q.top();
            if(x==1) break;
            q.pop();

            if(x%2)
            {
                q.push(x/2);
                q.push(x/2);
                q.push(1);

            }
            else{
                if(x/2 >0)q.push(x/2);
                if(x/2 -1 >0)q.push(x/2 -1);
                q.push(1);
            }
        }

        ll ans = 0;

        while(!q.empty())
        {
            ans+=(binpow(2,q.top())-1);
            q.pop();
        }
        cout << ans << endl;
        
    }
    return 0;
}