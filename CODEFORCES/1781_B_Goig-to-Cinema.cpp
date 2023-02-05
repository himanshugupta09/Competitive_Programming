#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(ll i = a;i < b;i++)
#define maxHeap  priority_queue<int>
#define minHeap  priority_queue<int, vector<int>, greater<int> >

#define ll long long 
ll  md  = 1e9+7;


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
long long digit_sum(long long input) {
    long long total = input % 10;
    while ((input /= 10) != 0)
        total += input % 10;
    return total;
}

*/

// map<int,int> F;
// pair<int, int> M[100010];
// int q, n, B[100010], poss, prev1;
//char c[1005];
void solve()
{
    ll n;
    cin >> n;
    
    vector<ll>a(n+1);
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        
        a[x]++;
        
    }
    
    ll ans = 0;
    ll sum = 0;
    
    for(int i=0;i<=n;i++)
    {
        if(a[i] == 0 && sum == i)
        {
            ans++;
        }
        sum += a[i];
    }
    cout << ans << "\n";
    
    
     
     
    return;
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
