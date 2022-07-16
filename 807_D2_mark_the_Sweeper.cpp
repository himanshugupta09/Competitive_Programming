#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	
	int ptr,ans = 0;
	while(ptr<n && a[ptr]==0) ptr++;
	for(int i=ptr;i<n-1;i++)
	{
		ans += a[i];
		if(a[i] == 0) ans++;
	}
	cout<<ans;
	cout<<"\n";
}

int main() {
    int tt; cin >> tt;
    while (tt--) solve();
}
