#include<iostream>
using namespace std;
 
const int N=2e5+5;
long long int n,q,x,y,s,k,t=-1,op,a[N],b[N];
int  main()
{
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	for(int i=1;i<=q;i++)
	{
		cin>>op>>x;
		if(op==1)
		{
			cin>>y;
			s+=y-(b[x]>t?a[x]:k);
			a[x]=y,b[x]=i;
		}
		else
		{
			k=x,t=i;
			s=n*x;
		}
		cout<<s<<endl;
	}
	return 0;
}
