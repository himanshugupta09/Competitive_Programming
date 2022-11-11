#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    long long N , K , V , S = 0;
        cin>>N>>K>>V;
        for(int j = 1 ; j <= N ; j++){
            int x;
            cin>>x;
            S += x;
        }
        if( (V * (N+K)- S)%K ){
            cout<<-1<<"\n";
            
        }
        else{
            long long ans = (V * (N+K)- S)/K;
            if(ans <= 0) ans = -1;
            cout<<ans<<endl;
        }
	    
	    
	    
	    
	}
	
	
	
	
	return 0;
}
