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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    
    ll x = a*d;
    ll y = b*c;
    
    
    if(x == y)
    {
        cout<<0<<"\n";
    }
    else{
        if(y != 0 && (x%y) == 0 || x != 0 && (y%x == 0))
        {
            cout<<1<<"\n";
        }
        else{
            cout<<2<<"\n";
        }
    }
	
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
