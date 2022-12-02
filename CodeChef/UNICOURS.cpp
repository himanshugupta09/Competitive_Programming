#include <bits/stdc++.h>
using namespace std;

void solve()
{
    
    int n;
    cin >> n;
    
    int cnt = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        
        cnt = max(cnt,x);
        
    }
    
    cout << (n-cnt) <<"\n";
    
    
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
