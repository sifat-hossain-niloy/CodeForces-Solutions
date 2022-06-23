#include<bits/stdc++.h>

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
    
    
    int n,q;
    cin >> n >> q;
    vector<int> a(n+1,0),b(n+1,0);
    map<int,int> mx,my;

    //cout << n << " " << q << endl;
    ll t;
    for (int k = 0;k<q;k++)
    { 
        cin >> t;
        //cout << t <<  " ";

        if(t==1)
        {
            //cout << t <<  " ";
            int x,y; 
            cin >> x >> y;
            
            mx[x] ++;a[x] = a[x-1]+1;
            my[y] ++;b[y] = b[y-1]+1;
            for (int i = x+1;i<=n;i++)
            {
                if(mx[i]==0) break;
                else{
                    a[i] = a[i-1]+1;
                }
            }
            for (int i = y+1;i<=n;i++)
            {
                if(my[i]==0) break;
                else{
                    b[i] = b[i-1]+1;
                }
            }
            

        }
        else if(t==2)
        {
            //cout << t <<  " ";
            int x,y;
            cin >> x>> y;
            mx[x]--;
            my[y]--;
            for (int i = x;i<=n;i++)
            {
                if(mx[i]==0) a[i] = 0;
                else{
                    a[i] = a[i]+1;
                }
            }
            for (int i = y+1;i<=n;i++)
            {
                if(my[i]==0) b[i] = 0;
                else{
                    b[i] = b[i-1] +1;
                }
            }

        }
        else{
            //cout << t <<  " ";
            int x1,x2,y1,y2;
            cin >> x1 >> y1 >> x2 >> y2;
            int hobe = 0;
            //cout << x1 << y1 << x2 << y2 ;
            if(a[x2]<= (x2-x1))hobe++;
            if(b[y2]<=(y2-y1)) hobe++;
            if(hobe==2) N;
            else Y;
        }
    }
    
    return 0;
}
