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

int maxSum(int arr[], int n, int k) 
{ 

// Compute sum of first window of size k 
int res = 0; 
for (int i=0; i<k; i++) 
   res += arr[i]; 

// Compute sums of remaining windows by 
// removing first element of previous 
// window and adding last element of  
// current window. 
int curr_sum = res; 
for (int i=k; i<n; i++) 
{ 
   curr_sum += arr[i] - arr[i-k]; 
   res = max(res, curr_sum); 
} 

return res; 
 } 

int main(){

    
    TC(t)
    {
        int n,x;
        cin >> n >> x;
        vector<ll> mp(n+1,INT64_MIN);

        ll a[n],pos = 0,ans;
        for (int i = 0;i<n;i++)
        {
            cin >> a[i];
        }
        /*
        if(pos==n)
        {
            for (int i = 0;i<=n;i++)
            {
                cout << sum+i*x << " ";

            }
            cout << endl;
            continue;
        }*/

        for (int i = 0;i<n;i++)
        {
            ll cnt = 0;
            for (int j = i;j<n;j++)
            {
                cnt+=a[j];
                mp[j-i+1] = max(cnt,mp[j-i+1]);

            }
            
        }
        for (int i = 0;i<=n;i++)
        {
            ans = 0;
            for (int j = 1;j<=n;j++)
            {
                ans = max(ans,mp[j]+(min(i,j)*x));
            }
            cout << ans << " ";

        }
        cout << endl;
        
    }
    return 0;
}