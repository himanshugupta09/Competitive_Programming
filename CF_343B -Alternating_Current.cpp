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
		 if(i%2 == 1)
		 {
			 if(s[i] == '+'){
				 s[i] = 'A';
			 }
			 else{
				 s[i] = 'B';
			 }
		 }
		 else{
			 if(s[i] == '-'){
				 s[i] = 'A';
			 }
			 else{
				 s[i] = 'B';
			 }
		 }
	 }
	 
	 for(int i = 0;i<s.length();i++)
	 {
		 if(s[i] == 'A')
		 {
			 st.push(s[i]);
		 }
		 else{
			 if(!(st.empty())){
				 st.pop();
			}
			else{
				continue;
			}
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
