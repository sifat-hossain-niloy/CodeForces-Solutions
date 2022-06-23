#include <iostream>
using namespace std;

int main() {
    //freopen("out.txt","w",stdout);
	int n = 2*1e5,q = 200000;
	
	cout << n << " " << q << endl;
	int now = 1;
	
	for (int i = 0;i<n;i++)
	{
		
		if(i!=n-1 )cout << now%100000 +1 << " ";
        if(i==n-1) cout << now%100000 +1 ;
        now+=7;
	}
    cout << endl;
	int x = 2,y =1;
	for (int i = 0;i<q;i++)
	{
        if(x%n <y%n) swap(x,y);
		cout << x%n +1 << " " << y%n +1 << endl;
		x++;
		y++;
	}
	return 0;
}