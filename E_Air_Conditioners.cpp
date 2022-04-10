#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> a(k),t(k),minr(n,INT_MAX),minl(n,INT_MAX);
		
		for(int i=0;i<k;i++){
			cin>>a[i];
		}
		for(int i=0;i<k;i++){
			cin>>t[i];
			minr[a[i]-1]=a[i]-1+t[i];
			minl[a[i]-1]=t[i]-(a[i]-1);
		}
		
		for(int i=1;i<n;i++){
			minl[i]=min(minl[i-1],minl[i]);
		}
		
		for(int i=n-2;i>=0;i--){
			minr[i]=min(minr[i],minr[i+1]);
		}
		//cout<<min(minl[i],minr[i])<<"";
		for(int i=0;i<n;i++){
			cout<<min(minl[i]+i,minr[i]-i)<<" ";
		}
		cout<<endl;
		
	}
}
