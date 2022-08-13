#include <stdio.h>

int main() {
	// Your code goes here
	int n,i;
	int mn_i,mx_i;
	int mx = 0,mn = 101;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i = 0;i<n;i++)
	{
		if(a[i]>mx)
		{
			mx = a[i];
			mx_i = i;
		}
		if(a[i]<=mn)
		{
			mn = a[i];
			mn_i = i;
		}
	}
	if(mx_i > mn_i)
	{
		mn_i += 1;
	}
	
	printf("%d",(mx_i+n-mn_i)-1);

	return 0;
}
