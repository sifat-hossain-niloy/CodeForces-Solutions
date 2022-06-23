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
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int a[n];

        FL(n)
        {
            a[i] = -1;
        }

        if(s[0]=='9')
        {
            char ans[n+1] ;
            for(int i = 0;i<=n;i++)
            {
                ans[i] = '1';
            }
            for (int i = n-1;i>=0;i--)
            {
                if(ans[i+1]>=s[i])
                {
                    a[i]= ans[i+1]-s[i];
                }
                else{
                    ans[i+1]+=10;
                    ans[i]--;
                    a[i] = ans[i+1]-s[i];
                }
            }

        }
        else{
            if(s[0]>=s[n-1])
            {
                a[0] = 1;
                a[n-1] = s[0]-s[n-1]+1;
            }
            else{
                a[0] = s[n-1]-s[0];
                a[n-1] = 0;
            }
        }
        for (int i = 0,j = n-1;i<=j;i++,j--)
        {
            if(a[i]!=-1 || a[j]!=-1) continue;
            //cout << s[i] <<  " " << s[j]  << endl;
            if(s[i]==s[j])
            {
                a[i] = 0;
                a[j] = 0;
            }
            else if(s[i]>s[j])
            {
                a[i] = 0;
                a[j] = s[i]-s[j];
            }
            else{
                a[j] = 0;
                a[i] = s[j]-s[i];
            }
        }
        for (int i =0;i<n;i++)
        {
            cout << a[i] ;
            if(a[i]==-1)
            {
                cout << "kire " <<  i << endl;
            }
        }
        cout << endl;
        
    }
    
    return 0;
}