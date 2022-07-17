#include <algorithm>
#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n,l,r;
	cin>>n>>l>>r;
	vector<int> a(1e5 + 23);
	int ok = 1;
	for(int i=1;i<=n;++i)
	{
		a[i] = ((l-1)/i+1)*i;
		ok = ok && a[i] <= r;
	}
	if(ok){
		cout<<"YES\n";
		for(int i=1;i<=n;++i){
			printf("%d%c" ,a[i] ," \n"[i == n]);
		}
		
	}
	else{
		cout<<"NO\n";
	}
}
 
int main() {
    int tt; cin >> tt;
    while (tt--) solve();
}
