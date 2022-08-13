n = int(input())
a = list(map(int,input().split()))
res = 1
mx = 1
for i in range(1,n):
	if a[i]>a[i-1]:
		mx += 1
	else:
		res = max(res,mx)
		mx = 1	
print(max(res,mx))
