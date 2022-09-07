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
  int n,m;
  cin>>n>>m;
  
  if(n>m)
  {
    cout<<"NO\n";
  }
  else if(n%2 == 1)
  {
    cout<<"YES\n";
    for(int i=0;i<n-1;i++)
    {
      cout<<1<<" ";
    }
    cout<<(m-n)+1<<"\n";
  }
  else if(n%2 == 0 && m%2 == 0)
  {
    cout<<"YES\n";
    for(int i=0;i<n-2;i++)
    {
      cout<<1<<" ";
    }
    cout<<(m-n+2)/2<<" "<<(m-n+2)/2<<"\n";
  }
  else if(n%2 == 0 && m%2 ==1)
  {
    cout<<"NO\n";
    
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
