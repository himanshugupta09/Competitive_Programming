#include<iostream>
#include<map>
#include<utility>
using namespace std;

void ans()
{
	int n;cin>>n;
	cout<<n<<' ';
	for(int i=1;i<n;i++)
	{
		cout<<i<<' ';
	}
	cout<<"\n";
	
}

int main()
{
	int t;cin>>t;
	while(t--)
	{
		ans();
	}
	return 0;
}
