#include <bits/stdc++.h>
using namespace std;
#define f(i,b) for(ll i = 0;i < b;i++)
#define maxHeap  priority_queue<int>
#define minHeap  priority_queue<int, vector<int>, greater<int>>
#define sab(x) x.begin(),x.end()
#define ll long long 
ll  md  = 1e9+7;
int vis[200005];

void printer(vector<ll>& v)
{
    for(auto i:v)
    {
        cout << i << " ";
    }
}

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
*/

/*
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

/*
//Template for accesssing the elements from  set index bassed

template <typename T>
pair<T, bool> getNthElement(set<T>& searchSet,
                            int index)
{
    pair<T, bool> result;
 
    // Check if index is valid or not
    if (searchSet.size() > index) {
        result.first
            = *(std::next(
                searchSet.begin(),
                index));
        result.second = true;
    }
 
    else
        result.second = false;
 
    // Return the pair
    return result;
}
*/



/*

// Code To Remove all occurece of element from vector
void remove(vector<int> &v, int &target)
{
    v.erase(remove(v.begin(), v.end(), target), v.end());
}

*/

// Function to Sort the vector of pairs on basis of second value
/*
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
*/

/*
void permute(string str)
{
    
    sort(str.begin(), str.end());
 
    
    do {
       cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}
*/
/*
bool sortbysecdesc(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}
*/
/*
int dig_sum(int x){
    int result = 0;
    while(x > 0){
        result += x % 10;
        x /= 10;
    }
    return result;
}
*/
// pair<ll,ll>s[110];
// ll d[110];

struct p{
    int w,pos,id;
    
};
void solve()
{
   int n,m;
   cin >> n >> m;
   
   vector<p>v(m);
   
   for(int i=0;i<m;i++)
   {
       cin >> v[i].pos >> v[i].w;
       v[i].id = i+1;
   }
   
   
    sort(v.begin(), v.end(), [] (p a, p b){
        return a.w < b.w;
    });
    
    int sum = 0;
    
    f(i, m){
        if(i < 2 * n) sum += v[i].w;
        else v.pop_back();
    }
    
    
     sort(v.begin(), v.end(), [] (p a, p b){
        return a.pos < b.pos;
    });
    
    cout << sum << "\n";
    f(i, n){
        cout << v[i].id << ' ' << v[2 * n - i - 1].id << endl;
    }
    cout << "\n";
    
}



  

  
  
 
 
 // cout<<"\n";



int main()
{
	int t=1;
    cin>>t;
    
	
	
while(t--)
    {
       solve();
        
    }    
	
	return 0;
    
}
