#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n,m;
    cin >> n >> m;
    
    if ( (n == 1 && m > 3) || (m == 1 && n > 3 ) ) cout << ("No\n");
        else if ( n%2 == 1 && m%2 == 1 ) cout << ("No\n");
        else cout << ("Yes\n");
    
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--)
	{
	    solve();
	    
	}
	return 0;
}
