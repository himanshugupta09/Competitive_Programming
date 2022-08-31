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
   
   string s;
   cin>>s;
   
   ll res  = 0 ;
   vector<ll>v;
   
   for(int i=0;i<n;i++)
   {
       if (s[i] == 'L') {
			v.push_back((n - 1 - i) - i);
			res += i;
		}
		else {
			v.push_back(i - (n - 1 - i));
			res += n - 1 - i;
		}
   }
   
  sort(v.begin(), v.end(), greater<int>());
   
   
   for(int i=0;i<n;i++)
   {
       if(v[i]>0)
       {res += v[i];}
       cout<<res<<" ";
       
   }
   cout<<"\n";
   
   
    
    
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
