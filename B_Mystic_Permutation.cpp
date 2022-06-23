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
        int n,m,k;
        cin >> n >> m >>k;
        
        string a,b,c;
        cin >> a >> b;
        vector<char> x,y;
        
        for (auto i : a)
        {
            x.push_back(i);
        }
        for (auto i : b)
        {
            y.push_back(i);
            
        }
        sort(x.rbegin(),x.rend());
        sort(y.rbegin(),y.rend());
        int num ,cnt = 0;
        if(x.back()>y.back()) num = 2;
        else num = 1;

        while(y.size()>0 && x.size()>0)
        {
            if(x.back()>y.back())
            {

                if(num==-1)
                {
                    c+=y.back();
                    y.pop_back();
                    num=2;
                    cnt++;
                }
                else if(num==1)
                {
                    num = 2;
                    cnt = 1;
                    c+=y.back();
                    y.pop_back();
                }
                else{
                    if(cnt==k){
                        c+=x.back();
                        x.pop_back();
                        num = 1;
                        cnt = 1;
                    }
                    else{
                        cnt++;
                        c+=y.back();
                        y.pop_back();
                    }
                    
                }

            }
            else{
                if(num==-1)
                {
                    c+=x.back();
                    x.pop_back();
                    num=1;
                }
                else if(num==2)
                {
                    num = 1;
                    cnt = 1;
                    c+=x.back();
                    x.pop_back();
                }
                else{
                    if(cnt==k){
                        c+=y.back();
                        y.pop_back();
                        num = 2;
                        cnt = 1;
                    }
                    else{
                        cnt++;
                        c+=x.back();
                        x.pop_back();
                    }
                    
                }

            }
        }
        cout << c << endl;
        
    }
    
    return 0;
}