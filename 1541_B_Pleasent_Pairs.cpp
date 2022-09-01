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
    
    int cnt = 0;
    
    ll a[n+1];
    
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        
        
        
    }
    
    
    for(ll i=1;i<=n;i++)
    {
        for(ll j = a[i]-i;j<=n;j+=a[i])
        {
            if(j <= i)
            {
                continue;
                
            }
            if(i+j == a[i]*a[j])
            {
                cnt++;
            }
            
        }
    }
    cout<<cnt<<"\n";
    


    
    
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
