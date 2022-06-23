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
        ll  a[n],ans = 0;

        ll ma = INT64_MIN,mi= INT64_MAX;
        int mai,mii;

        for (int i = 0 ;i<n;i++)
        {
            cin >> a[i];
            if(a[i]>=ma)
            {
                mai=i;
                ma = a[i];
            }
            else if(a[i]<mi)
            {
                mii = i;
                mi = a[i];
            }
        }
        
        ll dif = ma-mi;
        cout << mai << " sds " << mii << endl;
        ans+=dif;
        
        if(mai ==mii)
        {
            cout << abs(ma) << endl;
            continue;
        }
        else if(mai<mii) // maxi bam e
        {
            for (int i = 0;i<=mai;i++)
            {
                a[i]-=dif;
                if(a[i]<mi)
                {
                    mii= i;
                    mi = a[i];
                }
            }
        }
        else{
            for (int i = mai;i<n;i++)
            {
                a[i]-=dif;

                if(a[i]<mi)
                {
                    mii=i;
                    mi = a[i];
                }
            }
            
        }
        //cout << mi <<  " " << ma << endl;
        //cout << ans << " 1 ";
        ll now = 0;

        for (int i = mii+1;i<n;i++)
        {
            if((abs(mi-a[i]))<=now) continue;
            else{
                //cout << now << " lagbe " << a[i]  << endl;
                
                ans+=(abs(mi-a[i])-now);
                now = abs(mi-a[i]);
                
                
            }
        }
        now = mi;
        for (int i = mii-1;i>=0;i--)
        {
            if((abs(mi-a[i]))<=now) continue;
            else{
                ans+=(abs(mi-a[i])-now);
                now = abs(mi-a[i]);
            }
        }
        ans+=abs(a[0]);
        cout << ans << endl;

    }
    
    return 0;
}