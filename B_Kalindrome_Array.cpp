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

bool kali (int a[],int n,int l ,int r)
{
    int hobe  = 1;
    while(l<r)
    {
        if(a[l]==a[r]) {
            l++;
            r--;
        }
        else if(a[l]==n)
        {
            l++;
        }
        else if(a[r]==n)
        {
            r--;
        }
        else{
            hobe = -1;
            break;
        }
    }
    if(hobe == 1) return true;
    else return false;
}


int main(){

    
    TC(t)
    {
        int n;
        cin >> n;

        int a[n];

        FL(n)
        {
            cin >> a[i];
        }

        int l = 0,r = n-1,hobe = 1;
        while(l<r)
        {
            if(a[l]==a[r])
            {
                l++;
                r--;
            }
            else if(kali(a,a[l],l+1,r) || kali(a,a[r],l,r-1))
            {
                
                break;
            }
            else 
            {
                hobe = -1;
                break;
            }
        }
        if(hobe == 1)
        {
        Y;
        }
        else N;
    }
    return 0;
}