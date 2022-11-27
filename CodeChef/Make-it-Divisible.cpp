#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    if(n==1)
	    {
	        cout<<3<<"\n";
	    }
	    else if(n == 2)
	    {
	        cout<<33<<"\n";
	    }
	    else if(n>=3)
	    {
	        cout<<3;
	        for(int i=0;i<n-2;i++)
	        {
	            cout<<0;
	        }
	        cout<<3<<"\n";
	    }
	    
	}
	return 0;
}
