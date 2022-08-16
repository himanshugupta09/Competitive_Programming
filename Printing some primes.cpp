#include<iostream>
#include<vector>

using namespace std;
vector <bool> ok(100000000,true);
int arr[8000000];
int main()
{
    long long int n = 100000000;
    long int i,j ;
    ok[1] = false;
    ok[0] = false;
    for(i=4;i<=n;i+=2)
     ok[i]=false;
      for(i=3;i*i<=n;i+=2)
     {
           if(ok[i])
             {
                for(j=i*i;j<=n;j=j+(2*i))
                ok[j] = false;
             }
     }
       j=0;
       arr[0] = 2;
       for(i=3;i<=n;i+=2)
      {
        if(ok[i])
        arr[++j]=i;
       }
       for(i=1;i<=j;i+=100)
      cout<<arr[i-1]<<"\n";
      return 0;
   }
