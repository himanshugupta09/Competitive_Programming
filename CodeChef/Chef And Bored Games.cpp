#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


void solve()
{
    int n;
    cin>>n;
    
    int N = n/2;
    
    int a = 4 * (N * (N + 1) * (2 * N + 1) / 6);
    int b = n * (n + 1) * (2 * n + 1) / 6;
    
    if(n&1)
    {
        cout<<b-a<<"\n";
        
    }else{
        cout<<a<<"\n";
        
    }
}

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    solve();
	    
	    
	}
	
	return 0;
}
