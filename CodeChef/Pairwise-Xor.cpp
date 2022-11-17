#include <bits/stdc++.h>


using namespace std;

#define nline '\n'
void solve()
{

int x;
cin>>x;

if(x%2==1){
     cout<<-1<<nline;
}
else{
    for(int i=0;i<30;i++){
        if(((1<<i)&(x/2)) && (x/2!=1<<i)){
           cout<<(x/2)<<" "<<(1<<i)<<" "<<0<<nline;   // cout<<S<<" "<<S'<<" "<<0<<nline; 
           return;
        }
    }

    cout<<-1<<nline;
}


}



int main()
{   

   
   int t=1;
   cin >> t;

   while (t--)
   {
       solve();
   }
}
