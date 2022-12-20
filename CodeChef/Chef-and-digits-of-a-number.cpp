#include <bits/stdc++.h>
using namespace std;


void solve()
{
    string s;
    cin >> s;
    
    int o = 0,z = 0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '0')
        {
            o++;
        }
        else
        {
            z++;
        }
    }
    
    //cout << o << z << "\n";
    
    if(z == 1 || o == 1)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
        
    }
    
    
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--)
	{
	    solve();
	}
	return 0;
}
