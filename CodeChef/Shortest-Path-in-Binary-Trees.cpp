#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int ans = 0;
	    while(a != b)
	    {
	        if(a > b)
	        {
	            if(a%2 == 0)
	            {
	                a/=2;
	                ans++;  
	            }
	            else
	            {
	                a = (a-1)/2;
	                ans++;
	            }
	        }
	        else
	        {
	            if(b%2 == 0)
	            {
	                b/=2;
	                ans++;
	            }
	            else
	            {
	                b = (b-1)/2;
	                ans++;
	                
	                
	            }
	            
	        }
	        
	    }
	    
	    cout<<ans<<"\n";
	}

	return 0;
}
