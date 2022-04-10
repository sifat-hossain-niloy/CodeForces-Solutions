#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#include<vector>
#include<set>

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

ll nPr (int n,int r)
{
    if(n<0 || r<0) return 0;

    ll a[n+1];

    a[0] = 1;

    for (int i = 1;i<=n;i++)
    {
        a[i] = i*a[i-1];
    }
    return (a[n]/(a[r]*a[n-r]));
}

int main(){

    string s1,s2;
    cin >> s1 >> s2;

    int cp1=0,cm1=0,cp2=0,cm2=0,khali = 0;

    for (int i = 0;i<s1.size();i++)
    {
        if(s1[i]=='+') cp1++;
        else cm1++;
    }
    for (int i = 0;i<s2.size();i++)
    {
        if(s2[i]=='+') cp2++;
        else if(s2[i]=='-') cm2++;
        else khali++;
    }
    
    long double ans;

    
    cp1-=cp2;
    cm1-=cm2;
    //cout << cp1 << cm1<< khali;
    //cout << nPr(khali,cp1) ;
    if(cp1<0 || cm1 <0)
    {
        ans = 0;
    }
    else if(cp1==0 && cm1==0)
    {
        ans = 1;

    }
    else{
        ans = nPr(khali,cp1)/(binpow(2,khali)*1.0);
    }
    //cout << cp1 << " " << khali << " ";
    //cout << nPr(khali,cp1) << " " <<  binpow(2,khali) << " " ;
    
    cout << fixed << setprecision(12) << ans ;

    return 0;
}