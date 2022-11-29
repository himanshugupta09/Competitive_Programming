#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    
	    int mn = INT_MAX,mx = INT_MIN;
	    
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin >> x;
	        
	        mn = min(x,mn);
	        mx = max(mx,x);
	    }
	    
	    cout << (n == 1 || mx + mn <= k ? "YES\n":"NO\n");
	    
	    
	}
	
	
	
	return 0;
}
