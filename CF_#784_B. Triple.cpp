#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans = -1;
        vector<int> cnt(n + 1, 0);
    	
    	for(int i = 0; i < n; i++) {
    		int x; cin >> x;
    		if(++cnt[x] >= 3) {
    			ans = x;
    		}
    	}
    	cout << ans << endl;
    }
    return 0;
}
