#include <iostream>
#include<numeric>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   long long int a[n];
	   long long int sum=0;
	    for (int i = 0; i < n; i++) {
	        cin>>a[i];
	        sum+=a[i];
	    }
	   // cout<<sum<<endl;
	   long long sumX=sum/(n-1);
	    for (int i = 0; i < n-1; i++) {
	        cout<<sumX-a[i]<<" ";
	    }
	    cout<<sumX-a[n-1]<<endl;
	}
	return 0;
}
