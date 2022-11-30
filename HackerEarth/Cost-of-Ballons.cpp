#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int g,p;
	cin >> g >> p;

	int n;
	cin >> n;

	int a=0,b=0;

	for(int i=0;i<n;i++)
	{
		int x,y;
		cin >> x >> y;

		if(x  == 1) a++;
		if(y == 1) b++;
	}

	cout << max(a,b)*min(g,p) + max(g,p)*min(a,b) << "\n";

}

int main() {

	int t;
	cin >> t;

	while(t--)
	{
		solve();

	}

	return 0;
	
}
