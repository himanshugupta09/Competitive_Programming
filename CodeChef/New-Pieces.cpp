#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt{};
	cin >> tt;
	while(tt--){
	    int x{}, y{};
	    cin >> x >> y;
	    int p{}, q{};
	    cin >> p >> q;
	    if(x==p && y==q) cout << 0 << endl;
	    else if((x+y)%2!=(p+q)%2) cout << 1 << endl;
	    else cout << 2 << endl;
	}
	return 0;
}
