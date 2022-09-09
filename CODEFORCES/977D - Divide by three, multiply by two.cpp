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


/*bool contains(vector<ll> vec, ll elem)
{
    bool result = false;
    if( find(vec.begin(), vec.end(), elem) != vec.end() )
    {
        result = true;
    }
    return result;
}
*/

/*
bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    return a.second < b.second;
}

void sort(map<int, int>& M)
{
  
    
    vector<pair<int, int> > A;
  
    
    for (auto& it : M) {
        A.push_back(it);
    }
  
    
    sort(A.begin(), A.end(), cmp);
  
    cout<<M.size()<<"\n";
    
    
    for (auto& it : A) {
  
        cout << it.first<<" ";
    }
}
*/

int count3(ll n)
{
  int cnt = 0;
  
  while(n%3 == 0)
  {
    n=n/3;
    cnt++;
    
  }
  
  return cnt;
  
}

void solve()
{
  
 int n;
 cin>>n;
 
 vector<pair<int,ll>>v;
 
 v.resize(n);
 
  for(int i=0; i<n; i++){
    cin>>v[i].second;
    v[i].first=-count3(v[i].second);
  }
  sort(v.begin(), v.end());
  for(int i=0; i<n; i++)
    printf("%lld%c", v[i].second, " \n"[i + 1 == n]);
 
 
  
}
  
  
 
 // cout<<"\n";



int main()
{
	/*int t;
	cin>>t;
	*/
	//while(t--)
    //{
        solve();
    //}    
	
	return 0;
    
}
