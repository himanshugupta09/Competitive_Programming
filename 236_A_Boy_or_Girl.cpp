#include <algorithm>
#include <iostream>
#include <vector>
#include<set>

using namespace std;

int main() {
	// Your code goes here;
	
	set<char>a;
	
	string s;
	cin>>s;
	
	for(auto &i:s)
	{
		a.insert(i);
	}
	if(a.size()%2 == 0)
	{
		cout<<"CHAT WITH HER!"<<"\n";
	}
	else{
		cout<<"IGNORE HIM!"<<"\n";
	}


	return 0;
}
