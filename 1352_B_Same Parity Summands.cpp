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
  
    int n,k;
    cin>>n>>k;
    
    int o = n-(k - 1);
    
    if(o > 0 && (n%2 == 1))
    {
        cout<<"YES\n";
        
        for(int i=0;i<k-1;i++) cout<<"1"<<" ";
        
        cout<<o<<"\n";
    }
    
    int p = n - 2*(k - 1);
    
    if(p > 0 && (n%2 == 0))
    {
        cout<<"YES\n";
        
        for(int i=0;i<k-1;i++) cout<<"2"<<" ";
        
        cout<<p<<"\n";
        
       
    }
    else{
        cout<<"NO\n";
        

    }
    
    
    
}


int main()
{
	int t;
	cin>>t;
	
	while(t--)
    {
        int n, k;
		cin >> n >> k;
		int n1 = n - (k - 1);
		if (n1 > 0 && n1 % 2 == 1) {
			cout << "YES" << endl;
			for (int i = 0; i < k - 1; ++i) cout << "1 ";
			cout << n1 << endl;
			continue;
		}
		int n2 = n - 2 * (k - 1);
		if (n2 > 0 && n2 % 2 == 0) {
			cout << "YES" << endl;
			for (int i = 0; i < k - 1; ++i) cout << "2 ";
			cout << n2 << endl;
			continue;
		}
		cout << "NO" << endl;
    }
	
	return 0;
    
}
