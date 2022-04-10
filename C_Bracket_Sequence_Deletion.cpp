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
bool pal(string s)
{
    string t = s;
    reverse(t.begin(),t.end());

    if(s==t) return true;
    
    return false;
}


int main(){

    
    TC(t)
    {
        string s;
        int n;
        cin >> n >> s;
        int o = 0,c = 0,strt = 0,cnt = 0,baki ;
        
        int hobe = true;
        string k;
        for (int i = 0;i<n;i++)
        {
            if(s[i]=='(') o++;
            else {
                o--;
            }
            k+=s[i];
            if(o<0) hobe = false;
            if(o==0 && hobe && (i-strt)>=1){
                cnt++;
                strt= i+1;
                hobe =true;
                k = "";
                continue;
            }
            if(i-strt >=1 && s[strt]== s[i]){
                if(pal(k)){
                cnt++;
                o = 0;
                strt = i+1;
                k="";
                hobe = true;
                }
                

            }
            
            
        }
        cout << cnt << " " << (n-strt) << endl;
    }
    return 0;
}