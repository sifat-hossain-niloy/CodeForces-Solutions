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



ll a[1000];

ll cntbits(ll n)
{
    ll cnt = 0;

    while(n>0)
    {
        if(1 & n)
        {
            cnt++;
        }
        n/=2;
    }
    return cnt;
}
ll khujo(ll n)
{
    ll ans = cntbits(n);

    for (int i = 0;i<54;i++)
    {
        ll cnt = 0;

        if(a[i] == n)
        {
            ans = 1;
            break;
        }
        else if(a[i]<n && (n-a[i])<a[i])
        {
            cnt = 1+khujo(n-a[i]); 
            ans = min(ans,cnt);
        } 
        else if((n-a[i])>a[i])
        {
            break;
        }
        
    }
    return ans;
}


int main(){

    
    TC(t)
    {
        ll n;
        cin >> n;
        
        set<ll> s;

        ll temp = 1;
        
        for (int i = 0;i<40;i++)
        {
            temp*=2;
            s.insert(temp);
        }

        temp = 1;

        for (int i = 1;i<15;i++)
        {
            temp*=i;
            s.insert(temp);
        }
        
        ll x = 0;

        for (auto i:s)
        {
            a[x] = i;
            x++;
        }
        FL(54)
        {
            cout << a[i] << " ";
        }
        sort(a,a+54,greater<ll>());

        ll ans = khujo(n);
        cout << ans << endl;
        
        
        
    }
    return 0;
}