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
        int n,ff= -1;
        cin >> n;

        string s;
        cin >> s;
        
        if(s.find("aa")!= string:: npos) ff =2;
        else if(s.find("aba")!= string:: npos) ff=3;
        else if(s.find("aca")!= string:: npos) ff=3;
        else if (s.find("abca")!= string:: npos) ff=4;
        else if (s.find("acba")!= string:: npos) ff=4;
        else if (s.find("abbacca")!= string:: npos) ff=7;
        else if (s.find("accabba")!= string:: npos) ff=7;
        cout << ff << endl;
        


    }
    return 0;
}