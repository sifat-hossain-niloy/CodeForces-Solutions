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
    
    for (int tt = 1;tt<=t;tt++)
    {
        cout << "Case #" << tt << ":" << endl;
        int x,y;
        cin >> x >> y;

        ll cx = 0,cy = 0,cnt = 1,i;
        vector<pair<int,int>> v;
        while(cx<abs(x) || cy<abs(y))
        {
            i=cnt;
            if(cx!=abs(x))
            {
                if(cx+i >=abs(x))
                {
                    i-=(abs(x)-cx);
                    cx = abs(x);
                    if(cy+i>=abs(y))
                    {
                        i-=(cy-abs(y));
                        cy = abs(y);
                    }
                    else{
                        cy+=i;
                        i = 0;
                    }
                }
                else{
                    cx+=i;

                }
            }
            else {
                if(cy+i>=abs(y))
                {
                    cy = abs(y);
                }
                else{
                    cy+=i;
                }
            }
            v.push_back({cx,cy});
            cnt++;
        }

        cout << cnt-1 << endl;
        for (auto g:v)
        {
            if(x<0) cout << -g.first << " ";
            else cout << g.first << " ";
            if(y<0) cout << -g.second << endl;
            else cout << g.second << endl;
        }
    }
    
    
    
    return 0;
}