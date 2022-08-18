#include<iostream>
#include<vector>
#include<bitset>
#include<cmath>
#include<string>
#include <iterator>
#include <sstream>
#define f(i,a,b) for(ll i = a;i < b;i++)
typedef long long ll;

using namespace std;

const ll INF = 1e9 + 7;
void solve()
{
	    ll n,k;
        cin>>n>>k;
        ll p = 1;
        ll res = 0;
        f(j,0,31){
            if(k & (1<<j)){
                res = (res + p) % INF;
            }
            p *= n;
            p %= INF;
		}
	
	cout<<res<<"\n";
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
