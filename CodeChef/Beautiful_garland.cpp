#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	s+=s[0];
    	int i;
    	int cnt=0,gg=0,rr=0;
    	for(i=0;i<s.length()-1;i++){
    		if(s[i]==s[i+1]){
    			cnt++;
    			if(s[i]=='G')
    				gg=1;
    			else
    				rr=1;
    		}
    	}
    	if(cnt==2 && rr && gg){
    		cout<<"yes"<<endl;
    	}
    	else if(cnt==0){
    		cout<<"yes"<<endl;
    	}
    	else{
    		cout<<"no"<<endl;
    	}
    }
	
	return 0;
}
