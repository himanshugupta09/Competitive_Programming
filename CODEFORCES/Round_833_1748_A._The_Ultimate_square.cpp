#include <algorithm>
#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main() {
	// Your code goes here;
    int t;
    cin>>t;
    
    while(t--)
    {
        long long n;
        cin>>n;
        
        if(n%2)
        {
            cout<<(n/2)+1<<"\n";
        }
        else{
            cout<<n/2<<"\n";
        }
    }

	return 0;
}
