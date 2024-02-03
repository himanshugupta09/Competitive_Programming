#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{   
    ios;
   
    ll t;
    cin>>t;
    while(t--) {
        ll n,k,b;
        cin>>n;
        vector < vector < ll > > v;
        set < ll > se,tset;
        ll maxi = 0;
        map < ll, ll > ma,tmap;
        map < ll , vector < ll > >ind;
        for(ll i = 0 ; i < n ; i++) {
            vector < ll > temp;
            cin>>k;
            for(ll j = 0 ; j < k ; j++) {
                cin>>b;
                temp.push_back(b);
                ma[b]++;
                se.insert(b);
                ind[b].push_back(i);
            }
            v.push_back(temp);
        }
        
        set < ll >::iterator it;
        for(it = se.begin(); it!=se.end(); it++) {
            tset = se;
            tmap = ma;
            ll val = *it;
            for(ll i = 0 ; i < (ll)ind[val].size(); i++) {
                for(ll j = 0 ; j < (ll)v[ind[val][i]].size(); j++) {
                    tmap[v[ind[val][i]][j]]--;
                    if(tmap[v[ind[val][i]][j]] == 0) {
                        tset.erase(v[ind[val][i]][j]);
                    }   
                }
            }
             maxi = max(maxi,(ll)tset.size());
        }
        
        cout<<maxi<<endl;
    }
    return 0;     
 }
