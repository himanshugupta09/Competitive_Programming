n,k = map(int,input().split())
mx = 0
if k == 1:
	print(n)
else:
	ans = 1
	while ans<n:
		ans = ans*2+1
	print(ans)
