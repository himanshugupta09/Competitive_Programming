#include <bits/stdc++.h>

using namespace std;
 
const int maxw = 2e5, maxwr = 2e4, maxwi = 1e5, maxt = 10, maxn = 1e5;
int f[maxwi + 1]; 

int main()
{   
    int t; cin >> t; 
    int n, w, wr;
    while(t--){ 
        cin >> n >> w >> wr;
        memset(f, 0, sizeof(f));
        int x;
        for(int i = 0; i < n; i++){
            cin >> x;
            f[x]++;
        }
        long long int tot = wr;
        for(int i = 1; i <= maxwi; i++)tot += (long long int)i * 2 * (f[i] / 2);
        string ans = (tot >= w ? "YeS" : "No");
        cout << ans << endl;
    }
} 
