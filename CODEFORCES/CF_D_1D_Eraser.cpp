#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,jm;
        cin >> n >> jm;

        string tx;
        cin >> tx;

        int res = 0;
        for(int i=0;i<n;i++)
        {
            if(tx[i] == 'B')
            {
                res++;
                i += (jm-1);
            }
        }
        cout << res << "\n";
    }
    return 0;
}
