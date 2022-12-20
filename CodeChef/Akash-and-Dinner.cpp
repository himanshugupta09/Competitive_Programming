#include <bits/stdc++.h>
using namespace std;

int main() {
    int t=0;
    cin>>t;
    while(t--){
        int n=0,k=0;
        cin>>n>>k;
        vector<int> A(n,0),B(n,0);
        for(auto& i:A)  cin>>i;
        unordered_map<int,int> mn;
        for(int i=0;i<n;i++){
            int v=0;
            cin>>v;
            if(mn.count(A[i]))  mn[A[i]]=min(mn[A[i]],v);
            else mn[A[i]]=v;
        }
        vector<int> v;
        for(auto & [m,f]:mn)    v.push_back(f);
        sort(v.begin(),v.end());
        if(v.size()<k)  cout<<"-1\n";
        else cout<<accumulate(v.begin(),v.begin()+k,0ll)<<"\n";
    }
	return 0;
}
