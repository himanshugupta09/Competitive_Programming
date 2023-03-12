#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	string s;
	cin>>s;
	char curr;
	int count = 0,ans=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i] != curr)
		{
			curr = s[i];
			count =0;
		}
		if(s[i] == curr)
		{
			count++;
		}
		ans = max(count,ans);
	}
	cout<<ans<<"\n";
	return 0;
}
