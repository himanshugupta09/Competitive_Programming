#include <bits/stdc++.h>
using namespace std;
void case1(int n,int m){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << (1 + (n + 1)*i + j * (i + 1)) << " ";
        }
        cout<<"\n";
    }
}

 void case2(int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cout << (1 + i + j * (m + i + 1)) << " ";
        }
        cout<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n,m;cin>>n>>m;
        if(n<=m){
            case1(n,m);
        }
        else{
            case2(n,m);
        }
    }
}