

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
#define pp pair<long double, long double>

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

void display(pp par) {
   cout << "(" << par.first << ", " << par.second << ")" << endl;
}

pp inter(pp A, pp B, pp C, pp D) {
   double a = B.second - A.second;
   double b = A.first - B.first;
   double c = a*(A.first) + b*(A.second);
   
   double a1 = D.second - C.second;
   double b1 = C.first - D.first;
   double c1 = a1*(C.first)+ b1*(C.second);
   double det = a*b1 - a1*b;
    double x = (b1*c - b*c1)/det;
    double y = (a*c1 - a1*c)/det;
    return make_pair(x, y);
}

int main(){
    Fastio
    
    int t;
    cin >> t;
    while(t--)
    {
        long double a,b,x,y;
        cin >> a >> b >> x >> y;
        a*=1.0;
        b*=1.0;
        x*=1.0;
        y*=1.0;

        bool hobe = false;

        pp q,w,e,r,ans;
        q = make_pair(0,y);
        w = make_pair(x,(y+b));
        e = make_pair(a,y);
        r = make_pair((x+b),(y+b));
        ans = inter(q,w,e,r);

        if(ans.second>=0 && ans.second<=a && ans.first>=0 && ans.first<=a )
        {
            hobe = true;
            //cout << 1 << " ";
        }

        q = make_pair((x+b),0);
        w = make_pair(x,(y));
        e = make_pair((x+b),a);
        r = make_pair((x),(y+b));
        
        ans = inter(q,w,e,r);
        if(ans.second>=0 && ans.second<=a && ans.first>=0 && ans.first<=a )
        {
            hobe = true;
            //cout << 2 << " ";
        }
        q = make_pair((a),(y+b));
        w = make_pair((x+b),(y));
        e = make_pair((0),(y+b));
        r = make_pair((x),(y));
        ans = inter(q,w,e,r);
        if(ans.second>=0 && ans.second<=a && ans.first>=0 && ans.first<=a )
        {
            hobe = true;
            //cout << 3 << " ";
        }

        q = make_pair((x),(a));
        w = make_pair((x+b),(y+b));
        e = make_pair((x),(0));
        r = make_pair((x+b),(y));
        ans = inter(q,w,e,r);
        if(ans.second>=0 && ans.second<=a && ans.first>=0 && ans.first<=a )
        {
            hobe = true;
            //cout << 4 << " ";
        }
        if(hobe) cout << "yes\n";
        else cout << "no\n";
        
    }
    
    return 0;
}