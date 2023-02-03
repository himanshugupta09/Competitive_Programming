#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	vector<long long>a(t);
	for(int i=0;i<t;i++)
	{
	    cin>>a[i];
	}
	long long ans=0;
	sort(a.begin(), a.end());
	for(int i=0;i<t;i++)
	{
	    ans = max(ans, a[i]*(t-i));
	}
	cout<<ans<<endl;
	return 0;
}
