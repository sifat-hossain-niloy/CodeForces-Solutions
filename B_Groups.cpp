#include<bits/stdc++.h>
#include<stdio.h>
#include <iterator>

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
        cin >> n;

        int cnt[5] = {0};
        int a[n][5];

        for(int i = 0;i<n;i++)
        {
            for (int j = 0;j<5;j++)
            {
                cin >> a[i][j];
                if(a[i][j]==1)
                {
                    cnt[j]++;
                }
            }
        }
        //cout << v[].size() << endl;
        int temp = 0 ;
        for (int i = 0;i<5;i++)
        {
            if(cnt[i]>=n/2) temp++;
        }
        
        if(temp<2)
        {
            N;
        }
        else{
            bool hobe =  false;
            for (int i = 0;i<5;i++)
            {
                for (int j= i+1;j<5;j++)
                {
                    if(cnt[i]>=n/2 && cnt[j]>=n/2)
                    {
                        int com = 0,ci = 0 ,cj = 0;
                        for (int k = 0;k<n;k++)
                        {
                            if(a[k][i]==1 && a[k][j]==1) com++;
                            else if(a[k][i]==1) ci++;
                            else if(a[k][j]==1) cj++; 
                        }
                        if((ci+cj+com)>=n) hobe= true;
                    }
                }
            }
            if(hobe) Y;
            else N;
        }
        
    }

    return 0;
}