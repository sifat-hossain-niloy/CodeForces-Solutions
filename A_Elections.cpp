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
        ll a[3],ma = -1,b[3];
        map<int,int>mp;

        FL(3)
        {
            cin >> a[i];
            ma = max(ma,a[i]);
            mp[a[i]]++;
        }
        for (int i = 0;i<3;i++)
        {
            b[i] = ma-a[i];
            if(a[i]<ma) b[i]++;
            else if( a[i]==ma && mp[a[i]]>1) b[i]++;
        }
        for (int i = 0;i<3;i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
        


    }

    return 0;
}