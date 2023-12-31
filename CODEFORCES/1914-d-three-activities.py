for _ in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	b = list(map(int, input().split()))
	c = list(map(int, input().split()))
	
	def get_best3(a):
		mx1, mx2, mx3 = -1, -1, -1
		for i in range(len(a)):
			if mx1 == -1 or a[i] > a[mx1]:
				mx3 = mx2
				mx2 = mx1
				mx1 = i
			elif mx2 == -1 or a[i] > a[mx2]:
				mx3 = mx2
				mx2 = i
			elif mx3 == -1 or a[i] > a[mx3]:
				mx3 = i
		return (mx1, mx2, mx3)
	
	ans = 0
	for x in get_best3(a):
		for y in get_best3(b):
			for z in get_best3(c):
				if x != y and x != z and y != z:
					ans = max(ans, a[x] + b[y] + c[z])
	print(ans)
