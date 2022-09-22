#include <bits/stdc++.h>
#include <unordered_map>
#define ll long long int
using namespace std;


void solve()
{
  ll l;
  cin >> l;
  string s;
  cin >> s;
  vector<int> num;
        int pl = 0, mi = 0;
        for(int i = 0;i<l;i++){
            if(s[i] == '-') mi++;
            else if(s[i] == '+') pl++;
            else num.push_back(s[i] - '0');
        }
        sort(num.begin(), num.end());
        for(int i = num.size()-1;i>(pl + mi - 1);i--) cout<<num[i];
        for(int i = pl+mi-1;i>=0;i--){
            if(pl-->0) cout<<'+';
            else cout<<'-';
            cout<<num[i];
        }
        cout<<endl;

 }
 

int main(int argc, char **argv)
{

    auto ok = std::chrono::high_resolution_clock::now();



    // unsync the I/O of C and C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {

        solve();
    }    
    auto bk = std::chrono::high_resolution_clock::now();

    

    return 0;
}
