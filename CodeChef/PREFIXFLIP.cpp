#include<bits/stdc++.h>
using namespace std;

void msm()
{
  int n,m,fins = INT_MAX;
  
  cin >> n >> m;
  
  string ok;
  cin >> ok;
  
  int res = 0;
  vector<int>A(n,0);
  
  for(int i=1;i<n;i++)
  {
    if(ok[i] != ok[i-1])
    {
      res++;
      A[i] = res;
    }
    else
    {
      A[i] = res;
    }
  }
  A[0] = 0;
  
  for(int i=n-1;i>=0;i--)
  {
    if(i-(m-1) < 0)
    {
      break;
    }
    int sk = A[i] - A[i-(m-1)];
    if(ok[i] == '0')
    {
      sk++;
    }
    fins = min(fins,sk);
  }
  
  cout << fins << "\n";
  return;
}


int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        msm();
    }
    
    return 0;
    
}
