#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n,q;
	cin>>n>>q;
	
	int  a[100005];
	int b[100005];
	
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	int nq = 0;
	
	for(int i=n;i>=1;i--)
	{
		if(a[i]<=nq){
			b[i] = 1;
			
		}
		else if(q>nq){
			++nq;
			b[i] = 1;
		}
		else{
			b[i] = 0;
		}
	}
	for(int i=1;i<=n;i++) printf("%d",b[i]);
	cout<<"\n";
}

int main() {
    int tt; cin >> tt;
    while (tt--) solve();
}
