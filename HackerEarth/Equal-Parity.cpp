#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
  
	int cnt = 0;

	for(int i=0;i<2*n;i++)
	{
		int a;
		cin>>a;

		while(a%2 == 0)
		{
			cnt++;
			a/=2;
			
		}
		


	}

	if(cnt>=n)
	{
		cout<<"YES\n";

	}
	else{
		cout<<"NO\n";
	}
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();

	}


	return 0;
	
}




