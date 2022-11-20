#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
 
void solve()
{
  int n, k;
  cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
 
  sort(a, a + n);
  int sum1 = 0, sum2 = 0;
  int i = n - 1;
  while (k--)
  {
    sum1 += a[i];
    sum2 += a[i - 1];
    i -= 2;
  }
  sum2 += a[i];
  cout << max(sum1, sum2) << endl;
}
int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
 
  int t;
  cin >> t;
 
  while (t--)
    solve();
 
  return 0;
}
