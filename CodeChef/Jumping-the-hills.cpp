#include <bits/stdc++.h>

#define f(i,a,b) for(ll i = a;i < b;i++)



typedef long long ll;

using namespace std;

/*
const ll INF = 1e9 + 7;

ll md = 998244353;
int const maxi = 2000;
int a[maxi][maxi];
*/
/*
ll gcd(ll u, ll v) {
  ll shift;
  if (u == 0)
    return v;
  if (v == 0)
    return u;
  shift = __builtin_ctz(u | v);
  u >>= __builtin_ctz(u);
  do {
    ll m;
    v >>= __builtin_ctz(v);
    v -= u;
    m = (int)v >> 31;
    u += v & m;
    v = (v + m) ^ m;
  } while (v != 0);
  return u << shift;
}


ll lcm(ll v1, ll v2) {
    ll divisor = (v1 > v2 ?gcd(v1, v2) : gcd(v2, v1));
    return v1 * v2 / divisor;
  }
*/

/*bool contains(vector<ll> vec, ll elem)
{
    bool result = false;
    if( find(vec.begin(), vec.end(), elem) != vec.end() )
    {
        result = true;
    }
    return result;
}
*/

/*
bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    return a.second < b.second;
}

void sort(map<int, int>& M)
{
  
    
    vector<pair<int, int> > A;
  
    
    for (auto& it : M) {
        A.push_back(it);
    }
  
    
    sort(A.begin(), A.end(), cmp);
  
    cout<<M.size()<<"\n";
    
    
    for (auto& it : A) {
  
        cout << it.first<<" ";
    }
}
*/

/*
void dfs(int cur,vector<string> &S,vector<string> &T,int remain,string ans){
	
	if(remain<0)return;
	
	if(cur == S.size()){
		if(ans.size()>=3&&!binary_search(T.begin(),T.end(),ans)){
			cout<<ans<<endl;
			exit(0);
		}
		return;
	}
	
	if(ans.size()>0 && ans.back()!='_'){
		dfs(cur,S,T,remain,ans + "_");
	}
	else{
		dfs(cur+1,S,T,remain,ans + S[cur]);
		if(ans.size()>0)dfs(cur,S,T,remain-1,ans + "_");
	}
	
}
*/





void solve()
{
  
 int n,u,d;
 cin>>n>>u>>d;
 
 vector<int>v(n);
 for(int i=0;i<n;i++)
 {
     cin>>v[i];
 }
 int p = 1;
 int cn = 1;
 
 for(int i=0;i<n-1;i++)
 {
    if(v[i+1] > v[i] && (abs(v[i+1]-v[i])) <= u)
    {
        p++;
        
    }
    else if(v[i+1] < v[i] && (abs(v[i+1]-v[i])) <= d)
    {
        p++;
        
    }
    else if(v[i] == v[i+1])
    {
        p++;
    }
    else if(v[i] > v[i+1] && (abs(v[i+1]-v[i])) > d && cn == 1)
    {
        p++;
        cn = 0;
        
    }
    else{
        break;
    }
 }
 cout<<p<<"\n";
 
 
  
  
}
  

  
  
 
 // cout<<"\n";



int main()
{
	int t;
	cin>>t;
	
while(t--)
    {
        solve();
    }    
	
	return 0;
    
}
