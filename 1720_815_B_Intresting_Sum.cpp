#include<iostream>
#include<vector>
#include<bitset>
#include<cmath>
#include<string>
#include <iterator>
#include<algorithm>
#include <sstream>
#include<stack>

#define f(i,a,b) for(ll i = a;i < b;i++)

typedef long long ll;

using namespace std;

const ll INF = 1e9 + 7;


void solve()
{
    int n;
    cin>>n;
    vector<int>a;
    a.resize(n);
    
    for(int i = 0;i<n;i++)
    {
        int b;
        cin>>b;
        
        a[i]  = b;
    }
    sort(a.begin(),a.end());
    
    cout<<a[n-1] + a[n-2] - a[0] - a[1]<<"\n";
	
}


int main()
{
	int t;
	cin>>t;
	
	while(t--)
    {
        solve();
    }
	
	return 0;
    
}
