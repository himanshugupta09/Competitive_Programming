//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};


// } Driver Code Ends
//User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here 
        
        vector<pair<int,int>>rs;
        
        Node* fast = head;
        
        while(fast->next != NULL) fast = fast->next;
        
        
        
        
        
        
       
        Node* slow = head;
        
        
        while(slow->data < fast->data)
        {
           if(fast->data + slow->data == target)
           {
               pair<int,int>p(slow->data,fast->data);
               rs.push_back(p);
               fast = fast->prev;
               slow = slow->next;
               
                    
            }
            else if(fast->data + slow->data > target){
                fast = fast->prev;
                    
                    
            }
            else{
                slow = slow->next;
                
            }
            
        }
        
        return rs;
        
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> target >> n;
        int a;
        cin >> a;
        Node *head = new Node(a);
        Node *tail = head;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a;
            tail->next = new Node(a);
            tail->next->prev = tail;
            tail = tail->next;
        }
        Solution ob;
        auto ans = ob.findPairsWithGivenSum(head, target);
        if (ans.size() == 0)
            cout << "-1";
        else
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << "(" << ans[i].first << "," << ans[i].second << ")"
                     << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
