#include <algorithm>
#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                cout<<((i%4<=1)!=(j%4<=1))<<" \n"[j==m];
            }
        }
    }
    return 0;
}
