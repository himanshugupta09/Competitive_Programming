#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
	ll n;
	cin>>n;
	ll ip,sum = 0;
	for(int i =0;i<n-1;i++)
	{
		cin>>ip;
		sum+=ip;
	}
	cout<<n*(n+1)/2 - sum<<"\n";
	return 0;
}
