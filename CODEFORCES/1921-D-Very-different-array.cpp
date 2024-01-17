#include <bits/stdc++.h>

#define int long long
#define pb push_back
#define sz(x) x.size()
#define fi first
#define se second
#define pii pair<int, int> 

using namespace std;

const int N = 2e5 + 9;
const long long inf = 1e18 + 1;
const int mod = 1e9 + 7;

int a[N], b[N];

void solve(){
	int n, m;
	cin>> n>> m;
	for(int i = 1; i <= n; i++){
		cin>> a[i];
	}
	for(int i = 1; i <= m; i++){
		cin>> b[i];
	}

	sort(a + 1, a + n + 1);
	sort(b + 1, b + m + 1);

	int l = 1, r = n, L = 1, R = m, ans = 0;

	while(l <= r){
		if(abs(a[l] - b[R]) > abs(a[r] - b[L])){
			ans += abs(a[l] - b[R]);
			l++;
			R--;
		}else{
			ans += abs(a[r] - b[L]);
			r--;
			L++;
		}
	}

	cout<< ans<< endl;
}

main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int tt;
	cin>> tt;
	while(tt--){
		solve();
	}
}
