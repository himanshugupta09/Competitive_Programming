for _ in range(int(input())):
	n=int(input())
	a = list(map(int,input().split()))
	c,s= map(str,input().split())
	
	for i in range(n):
		for j in s:
			if j  == 'U':
				a[i] -= 1
			else:
				a[i]+=1
		print(abs(a[i])%10,end=' ')
	print()	
