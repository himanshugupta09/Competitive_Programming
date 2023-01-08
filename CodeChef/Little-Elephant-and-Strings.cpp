#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int k,n;
	cin >> k >> n;
	
	set<string>st;
	
	for(int i=0;i<k;i++)
	{
	    string x;
	    cin >> x;
	    st.insert(x);
	}
	
	vector<string>verif(n);
	for(int i=0;i<n;i++)
	{
	    cin >> verif[i];
	}
	
	for(int i=0;i<n;i++)
	{
	    string s = verif[i];
	    bool ok = false;
	    int m = s.size();
	    
	    for(int j=0;j<m;j++){
            for(int l=j;l<m;l++){
                string x=s.substr(j,l-j+1);
                if(st.count(x)){
                    ok=true;
                    break;
                }
            }
            
            if(ok)
            {
                break;
            }
           
	}
	   if(!ok && m < 47)
            {
                cout << "Bad\n";
                
            }
            else
            {
                cout << "Good\n";
                
            }
	
	}
	
	
	
	return 0;
}
