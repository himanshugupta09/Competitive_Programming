#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
	printf("%c %c %c\n",((360%n)==0)?'y':'n',(n<=360)?'y':'n',(n<=26)?'y':'n');

    return;
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
