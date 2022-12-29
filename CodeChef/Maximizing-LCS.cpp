#include<bits/stdc++.h>
using namespace std;

void msm()
{
    int ln;
    cin >> ln;
    
    string l;
    cin >> l;
    
    
    string s1 = l;
    
    string s2 = l;
    
    reverse(s2.begin(),s2.end());
    
    //cout << s1 << " " << s2 << "\n";
    
    
    
    
    
    
    
    int dp[s1.length()+1][s2.length()+1];
    int n=s1.length(),m=s2.length();
    for(int i=0;i<=n;i++)
    {
      for(int j=0;j<=m;j++)
      if(i==0||j==0)
      dp[i][j]=0;
      else
      {
        if(s1[i-1]==s2[j-1])
        dp[i][j]=dp[i-1][j-1]+1;
        else
        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
      }
    }
    cout<<dp[n][m]/2<<"\n";
    
    
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
