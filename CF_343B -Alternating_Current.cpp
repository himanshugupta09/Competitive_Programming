#include<iostream>
#include<vector>
#include<bitset>
#include<cmath>
#include<string>
#include <iterator>
#include <sstream>
#include<stack>

#define f(i,a,b) for(ll i = a;i < b;i++)
typedef long long ll;

using namespace std;

const ll INF = 1e9 + 7;
void solve()
{
	stack<char> st;
	 string s;
	 cin>>s;
	 
	 int n = s.length();
	 
	
	 for(int i = 0;i<n;i++)
	 {
		 if(st.empty() == true)
		 {
			 st.push(s[i]);
			 continue;
		 }
		 if(st.top() == s[i])
		 {
			 st.pop();
		 }
		 else{
			 st.push(s[i]);
		 }
		 
	 }
	 if(!(st.empty()))
	 {
		 cout<<"NO\n";
	 }
	 else{
		 cout<<"YES\n";
	 }
}


int main()
{
	//int t;
	//cin>>t;
	
	//while(t--)
	
		solve();
	
	
	return 0;
    
}
