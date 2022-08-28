#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <cassert>
#include <map>
#include <set>
#include <cmath>
#include <deque>
#include <random>
#include <iomanip>
#include <chrono>
#include <bitset>
#include <queue>
#include <complex>
#include <functional>

#define f(i,a,b) for(ll i = a;i < b;i++)

typedef long long ll;

using namespace std;

const ll INF = 1e9 + 7;

ll md = 998244353;
int const maxi = 2000;
int a[maxi][maxi];


void solve()
{
    ll n;
    cin>>n;
    
    n%=md;
    
    if(n<0) n+=md;
    
    cout<<n<<"\n";
    
    
    
    
    
}


int main()
{
	//int t;
	//cin>>t;
	
	//while(t--)
    //{
        solve();
    //}
	
	return 0;
    
}
