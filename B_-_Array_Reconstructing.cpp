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
        int n,m,pos = -1;
        cin >> n >> m;
        ll a[n];
        FL(n)
        {
            cin >> a[i];
            if(a[i]!=-1)
            {
                pos = i;
            }
        }
        for (int i = pos+1;i<n;i++)
        {
            a[i] = (a[i-1]+1)%m;

        }
        for (int i = pos-1;i>=0;i--)
        {
            if(a[i+1]==0)
            {
                a[i] = m-1;
            }
            else a[i] = (a[i+1]-1)%m;
        }
        FL(n)
        {
            cout << a[i] <<  " ";
        }
        cout << endl;
        
    }
    return 0;
}