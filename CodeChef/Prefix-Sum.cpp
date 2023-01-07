#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

#define INF INT_MAX
#define MOD 1000000007
#define all(x) x.begin(), x.end()

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T; cin >> T;
	while(T--){
		int N; cin >> N;
		if(N%4){
			cout << "NO\n";
			continue;
		}
		
		cout << "YES\n";
		
		vi A, B;
		for(int x = 1, f = 0; x <= N; x += 2, f = !f){
			if(f) A.push_back(x), B.push_back(x+1);
			else A.push_back(x+1), B.push_back(x);
		}

		reverse(all(B));

		for(auto i : A) cout << i << " ";
		cout << "\n";
		for(auto i : B) cout << i << " ";
		cout << "\n";

		cout << endl;
	}

	return 0;
}
