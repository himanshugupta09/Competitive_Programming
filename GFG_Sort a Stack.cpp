/* SIMPLE APPROACH WITH STL USING MULTI SET PROPERTY*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   
   multiset<int> m;
   
   while(!s.empty())
   {
       m.insert(s.top());
       s.pop();
       
   }
   for(auto  i:m)
   {
       s.push(i);
       
   }
   
   
   
   
   
}




/* ===========================================================================================================================================================
                                                  USING TWO STACK APPROACH 
  =============================================================================================================================================================
  */


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   
   stack<int>s1,s2;
   
   s1.push(s.top());
   s.pop();
   
   while(!s.empty())
   {
       if(s1.top()>=s.top())
       {
           s1.push(s.top());
           s.pop();
           
       }
       else{
           
           while(!s1.empty() && s1.top()<s.top())
           {
               s2.push(s1.top());
               s1.pop();
               
               
           }
           
           s1.push(s.top());
           
           while(!s2.empty())
           {
               s1.push(s2.top());
               s2.pop();
               
           }
           s.pop();
           
       }
   }
   
   while(!s1.empty())
   {
       s.push(s1.top());
       s1.pop();
       
   }
   
   
   
   
   
}

