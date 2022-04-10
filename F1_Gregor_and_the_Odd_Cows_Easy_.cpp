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
double area(int x1,int y1,int x2,int y2,int x3,int y3)
{
    double Ar,S,S1,S2,S3;
    S1=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    S2=sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
    S3=sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
    S=(S1+S2+S3)/2;
    Ar= sqrt(S*(S-S1)*(S-S2)*(S-S3));
    return Ar;
}

int bi(int x1,int y1,int x2,int y2)
{
    int x = abs(x1-x2),y = abs(y1-y2);

    if(x<y) swap(x,y);
    if( x== 0 ) return y+1;
    else if(y==0) return x+1;
    else if(x%y==0) return y+1;
    else return 3;
}
double dhal(int x1,int y1,int x2,int y2 )
{
    double x = abs(x1-x2)*1.0,y = abs(y1-y2)*1.0;
    if(x==0) return -1;
    else return y/x;
}


int main(){
    
    int n;
    int cnt = 0;
    cin >> n;

    int a[n],b[n];

    FL(n)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            for (int k = j+1;k<n;k++)
            {
                if(dhal(a[i],b[i],a[j],b[j])== dhal(a[k],b[k],a[j],b[j]) || dhal(a[i],b[i],a[j],b[j])== dhal(a[i],b[i],a[k],b[k]) || dhal(a[i],b[i],a[k],b[k])== dhal(a[k],b[k],a[j],b[j]))
                {
                    continue;
                }
                int z = bi(a[i],b[i],a[j],b[j]) + bi(a[k],b[k],a[j],b[j]) + bi(a[i],b[i],a[k],b[k]) - 3;
                if(z%2==0)
                {
                
                    int inner = int(area(a[i],b[i],a[j],b[j],a[k],b[k])) +1 -z/2;
                    if(inner%2){
                        cnt++;
                        cout << i << " " << j << " " << k << endl;
                    }
                }
            }
        }

    }
    cout << cnt << endl;

    return 0;
}