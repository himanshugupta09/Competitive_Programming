#include <bits/stdc++.h>
using namespace std;




void solve()
{
    int n;
    cin>>n;
    
    vector<int>v(n,0);
    
    int l = 0,r = n-1;
    int nxt = n;
    
    while(l<=r)
    {
        v[l] = nxt;
        l++;
        nxt--;
        
        if(l<=r)
        {
            v[r] = nxt;
            nxt--;
            r--;
            
        }
    }
    
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    
    
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
