for _ in range(int(input())):
	n,x = map(int,input().split())
	a = list(map(int,input().split()))
	a.sort()
	valid = True
	for i in range(0,n):
		if (a[n+i]-a[i])<x:
			valid = False
			
	if valid==True:
		print("YES")
	else:
		print("NO")			
	
