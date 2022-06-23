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

string display(vector<string> a, int n){
    string sz;
    for(int i=0;i<n;i++) 
    {
        sz+=a[i];
    }
    return sz;
}

int main(){
    Fastio
    
    ll t;
    cin >> t;

    for (int tt = 1;tt<=t;tt++)
    {
        cout << "Case #" << tt << ": ";

        ll n,ans = 0,tot=0;
        cin >> n;

        vector<string> v(n);
        bool hobe = true;


        FL(n)
        {
            cin >> v[i];
            string s = v[i];
            map<char,int> mp;

            for (int j = 0;j<v[i].size();j++)
            {
                mp[s[j]]++;
                if(mp[s[j]]>1 && s[j]!=s[j-1])
                {
                    hobe = false;
                }
            }
            
        }
        if(!hobe)
        {
            cout << "IMPOSSIBLE\n";
            continue;
        }

        sort(v.begin(),v.end());
        
        for (int k = 0;k<(n) && ans<n-1;k++)
        {
            //cout << "barbar\n";
            for (int i = 0;i<n;i++)
            {
                string x = v[i];
                for (int j = 0;j<n;j++)
                {
                    string y = v[j];
                    if(i==j) continue;

                    if(x[x.size()-1]== y[0] )
                    {
                        //cout << x << " 1 " << y << endl;
                        x+=y;
                        v[i] = x;
                        v[j] = "-1";
                        ans++;   
                    }/*
                    else if(x[0]== y[y.size()-1] )
                    {
                        cout << x << " 2 " << y << endl;
                        y+=x;
                        v[i] = "-1";
                        v[j] = y;
                        ans++;   
                    }*/
                }
                
            }
        }
        string ohstr;
        for (int i = 0;i<n;i++)
        {
            if(v[i]!="-1")
            {
                ohstr+=v[i];
                tot+=v[i].size();
            }

        }
        //cout << ohstr << endl;
        map<char,int> m;

        for (int j = 0;j<tot;j++)
        {
            m[ohstr[j]]++;
            if(m[ohstr[j]]>1 && ohstr[j]!=ohstr[j-1])
            {
                hobe = false;
            }
        }
        if(!hobe)
        {
            cout << "IMPOSSIBLE\n";

        }
        else cout << ohstr << endl;


        
        
    }
    
    return 0;
}