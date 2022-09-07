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

/*
ll gcd(ll u, ll v) {
  ll shift;
  if (u == 0)
    return v;
  if (v == 0)
    return u;
  shift = __builtin_ctz(u | v);
  u >>= __builtin_ctz(u);
  do {
    ll m;
    v >>= __builtin_ctz(v);
    v -= u;
    m = (int)v >> 31;
    u += v & m;
    v = (v + m) ^ m;
  } while (v != 0);
  return u << shift;
}


ll lcm(ll v1, ll v2) {
    ll divisor = (v1 > v2 ?gcd(v1, v2) : gcd(v2, v1));
    return v1 * v2 / divisor;
  }
*/
void solve()
{
  int n;
  cin>>n;
  
  vector<int>v;
  
  for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;
    
    v.push_back(a);
    
  }
  
  int res = 0;
  
  for(int i=0;i<n-1;i++)
  {
    res = max(res,(v[i] - v[i+1]));
    
  }
  
  for(int i=0;i<n-1;i++)
  {
    res = max(res,(v[n-1] - v[i]));
    
  }
  
  for(int i=1;i<n;i++)
  {
    res = max(res,(v[i] - v[0]));
    
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
