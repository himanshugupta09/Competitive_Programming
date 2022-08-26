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

int const maxi = 2000;
int a[maxi][maxi];


void solve()
{
    int n,m,sum =0;
    cin>>n>>m;
    
    string s;
    
    for(int i =0;i<n;i++)
    {
        cin>>s;
        for(int j=0;j<m;j++)
        {
            a[i][j] = s[j] - '0';
            sum += a[i][j];
            
        }
    }
    
    int mini = INF;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
         int cnt = a[i][j] + a[i+1][j] + a[i][j+1] +    a[i+1][j+1];
         
         mini = min(mini,max(1,cnt-1));
        }
    }
    
    
    if(sum == 0) cout<<0<<"\n";
    else cout<<1+sum-mini<<"\n";
    
    
    
    
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

















































































































































































































































































