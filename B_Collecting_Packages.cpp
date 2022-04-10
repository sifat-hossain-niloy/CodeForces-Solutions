#include<bits/stdc++.h>
#include<algorithm>

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
        int n,dan = -1,x=0,y=0;
        cin >> n;

        int ma[1001],mi[1001];

        FL(1001)
        {
            ma[i] = -1;
            mi[i] = 1001;
        }

        for (int i = 0;i<n;i++)
        {
            int x ,y;
            cin >> x >> y;

            dan = max(dan,x);

            ma[x] = max(ma[x],y);
            mi[x] = min(mi[x],y); 

        }
        string s = "";

        bool hobe = true;

        if(ma[0]!=-1)
        {
            for (int i = 0;i<ma[0];i++)
            {
                s+='U';
                y++;
            }
        }
        else{
            s+='R';
            x++;
        }

        for (int i = 1;i<=dan;i++)
        {
            if(ma[i]==-1)
            {
                x++;
            }
            else if(y>mi[i]) 
            {
                hobe = false;
                break;
            }
            else {
                
                for (int j = y;j<ma[i];j++)
                {
                    s+='U';
                    y++;
                }
                x++;
                
            }
            if(i!=dan) {
                s+='R';
            }
            
        }
        if(!hobe) N;
        else 
        {   Y;
        cout << s << endl;
        }
        
    }
    return 0;
}