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
    ll n,m;
    cin >> n >> m;

    ll a[n],b[n],c[n];
    FL(n)
    {
        cin >> a[i];
    }
    FL(n)
    {
        cin >> b[i];
        c[i] = a[b[i]-1];
    }

    reverse(c,c+n);/*
    FL(n)
    {
        cout << c[i] <<  " ";
    }*/
    ll temp = 1;

    for (int i = 1;i<n;i++)
    {
        if(abs(c[i]-c[i-1])%m==0)
        {
            temp++;
        }
        else {
            break;
        }
    }
    cout << n-temp << endl;
    
    return 0;
}