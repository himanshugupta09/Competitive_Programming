#include <iostream>
#include<cmath>

using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		
	int x,y,n;
	cin>>x>>y>>n;
	
	if(n-n%x+y <= n)
	{
		cout<< n-n%x+y<<"\n";
	}
	else{
		cout<<n-n%x-(x-y)<<"\n";
	}
	
	
	}
	return 0;
}
