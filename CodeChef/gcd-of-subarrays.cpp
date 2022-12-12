#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,k;
    cin >> n >> k;
    ll a=(n*(n + 1))/2;
    if(k < a)
    {
        cout << -1 << "\n";
        return;
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            cout << 1 << " ";
        }
        cout << k - (a-1) << "\n";
        //cout << "\n";
        return;
    }
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
