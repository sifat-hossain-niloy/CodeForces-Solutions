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
    
    TC(t)
    {
        int n;
        vector<int> v;
        string s;
        cin >> n >> s;

        int l = 0,r = n-1;

        while(l<r){
            if(s[l]=='1'&&s[r]=='0')
            {
                v.pb(l);
                v.pb(r);
                l++;
                r--;
            }
            else if(s[r]=='1' && s[l]=='0'){
                r--;
                l++;
            }
            else if(s[l]=='1'&&s[r]=='1')
            {
                r--;
            }
            else if(s[l]=='0'&&s[r]=='0')
            {
                l++;
            }
        }
        if(v.size()==0) cout << 0 << endl;
        else 
        {
            cout << 1 << endl;
            cout << v.size() << " ";
            sort(v.begin(),v.end());
            for (int i : v)
            {
                cout << i+1 << " ";
            }
            cout << endl;
        }
        
    }
    return 0;
}