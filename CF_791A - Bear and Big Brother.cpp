#include <iostream>

using namespace std;

int main() {
	
	int res = 0;
	int a,b;
	cin>>a>>b;
	
	while(a<=b)
	{
		a*=3;
		b*=2;
		res++;
	}
	
	cout << res << "\n";
	return 0;
}
