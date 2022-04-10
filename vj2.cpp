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
    int a,b,m;

    cin >> a >> b >> m;

    int vx,vy,vz;
    cin >> vx >> vy >> vz;
    
    double t = m*1.0/abs(vy);
    
    double x,z;
    if(vx>=0)x = a*0.5 + vx*t;
    else {
        x = abs(vx)*(t- (0.5*a)/vx );
    }
    z = vz*t;
    int kz = (int) z/b;

    
    
    if(kz%2)
    {
        z = b-(int)z %b;
        
    }
    else{
        while((int)z >=b)
        {
            z-=(1.0*b);
        }
    }

    int kx = (int) x/a;

    
    if(kx%2)
    {
       x = a-(int)x %a; 
    }
    else{
        while((int)x>=a)
        {
            x-=(1.0*a);
        }
    }

    printf("%.10lf %.10lf",x,z);
    
    return 0;
}