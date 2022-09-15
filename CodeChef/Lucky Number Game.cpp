#include <iostream>
using namespace std;


void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    
    
    int bt = 0,pa = 0,pb = 0;
    
    
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        
        if(num%a == 0 && num%b == 0)
        {
            bt++;
            
        }
        else if(num%a == 0 && num%b != 0)
        {
            pa++;
        }
        else if(num%a != 0 && num%b == 0)
        {
            pb++;
            
        }
    }
    
    if(bt)
    {
        pa++;
    }
    if(pa>pb)
    {
        cout<<"BOB\n";
            
    }
    else{
        cout<<"ALICE\n";
            
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
