#include <iostream>
#include<cmath>

using namespace std;



int main() {
	
	int k,r;
	cin>>k>>r;
	
	int sum = 0;
	
	for(int i = 1;;i++)
	{
		sum += k;
		if(((k*i)-r)%10==0||(k*i)%10==0)
		{
			cout<<i<<"\n";
			break;
		}
		else{
			continue;
		}
	}
	
	return 0;
}
