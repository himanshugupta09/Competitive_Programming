#include <algorithm>
#include <iostream>
#include <vector>
#include<stdlib.h>

using namespace std;

void solve()
{
	int n;cin>>n;
	char m[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>m[i][j];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i == j) continue;
			if(m[i][j] == 'W')
			{
				if(m[j][i] != 'L')
				{
					cout<<"incorrect\n";
					exit(0);
					
				}
			}
			else if(m[i][j] == 'D')
			{
				if(m[j][i] != 'D')
				{
					cout<<"incorrect\n";
					exit(0);
				}
			}
			else if(m[i][j] == 'L')
			{
				if(m[j][i] != 'W')
				{
					cout<<"incorrect\n";
					exit(0);
				}
			}
		}
		
}
cout<<"correct\n";
	
	
}

int main() {
	// Your code goes here;
	solve();

	return 0;
}
