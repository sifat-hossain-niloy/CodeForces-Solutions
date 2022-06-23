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
    Fastio
    
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;

        vector<int> v[n];

        for (int i = 0;i<n;i++)
        {
            for (int j = 0;j<m;j++)
            {
                int x;
                cin >> x;
                v[i].push_back(x);
            }
        }

        int f = -1,l = -1,hobe  = 1;

        for (int i = 0;i<n && f==-1 && l==-1;i++)
        {
            for (int j = 0;j<m-1 && l==-1;j++)
            {
                
                if(v[i][j]>v[i][j+1])
                {
                    if(f==-1){
                        f = j;
                    }
                    else if(l==-1){
                        l = j+1;
                    }
                    else{
                        if(j==f || j==l)
                        {
                            continue;
                        }
                        else{
                            hobe = -1;
                            break;
                        }
                    }
                    //continue;

                }
                if(f!=-1 && l==-1 && j>f)
                {
                    if(v[i][f]<v[i][j+1])
                    {
                        l = j;
                        break;
                    }
                    else if(v[i][f]== v[i][j+1])
                    {
                        l = j-1;
                        break;
                    }
                }
                
            }
        }
        

        if(f==-1 && l==-1)
        {
            cout << 1 << " " << 1 << endl;
            continue;
        }
        
        // for (int i = 0;i<n;i++)
        // {
        //     swap(v[i][f],v[i][l]);
        // }
        

        if(hobe!=-1)
        {
            cout << f+1 << " oo " << l+1 << endl;
            for (int i = 0;i<n;i++)
            {
                for (int j = 0;j<m-1;j++)
                {
                    if(v[i][j]>v[i][j+1])
                    {
                        hobe = -1;
                        break;
                    }
                }
                if(hobe==-1)break;
            }
            
        }
        if(hobe == -1)
        {
            cout << hobe << endl;
        }
        
        else{
            cout << f+1 << " " << l+1 << endl;
        }


    }
    
    return 0;
}