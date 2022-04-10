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
        string s,a = "ab",b = "ba";

		cin >> s;
		int c = 0,d = 0;

        ll l = s.size();
		for(int i = 0; i<l ; i++)
		{
			if(s.substr(i,2) == a) c++;
			else if(s.substr(i,2) == b) d++;
		}
		if(c==d)
			cout << s << endl;
		else
		{
			if(c>d)
			{
				for(int i=0;i<l;i++){
					if(s[i]=='a')
						s[i]='b';
					break;
				}
			}
			else
			{
				for(int i=0;i<l;i++){
					if(s[i]=='b')
						s[i]='a';
					break;
				}
 
			}
			cout << s << endl ;
 
		}
 
	}
        
    

    
    return 0;
}