#include <iostream>
using namespace std;
void solve(){
	    int n,m,c=-1,c1=-1,in=0,v=0,w=0,we=0;
	    cin>>n>>m;
	    while(n>0){
	    string str,binary;
	    cin>>str;
	    cin>>binary;

	    if(str=="correct")
{c=0;
    for(int i=0;i<m;i++)
    {
        if(binary[i]=='1')
        c++;
    }
}
	    if(str=="wrong")
{
    c1=0;
    for(int i=0;i<m;i++)
    {
        if(binary[i]=='0')
        c1++;
    }
}  
 if(c==m){
v++;
c=-1;}
else if(c!=m && c!=-1){
in++;
c=-1;}
else if(c1==0 ){
w++;
c1=0;}
else{ 
we++;
c1=0;}
n--;
	}
if(in>0)
	cout<<"INVALID"<<endl;	
else if( w>0)
	cout<<"WEAK"<<endl;
	else if(in==0 && we!=0)
	cout<<"FINE"<<endl;
	
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
