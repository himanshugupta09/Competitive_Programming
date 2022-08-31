from collections import defaultdict
def solve():
	
	lst = [0]*3
	d = {}
	n = int(input())
	
	
	for i in range(3):
		s = list(map(str,input().split()))
		for k in s:
			if k in d:
				d[k].append(i)
			else:
				d[k] = [i]	
	for i in d:
		if len(d[i]) == 1:
			t = d[i]
			lst[t[0]] += 3
		elif len(d[i]) == 2:
			ls = d[i]
			lst[ls[0]] += 1
			lst[ls[1]] += 1
	for i in lst:
		print(i,end = " ")
	print()	
						
				
	



t = int(input())
while t != 0:
	solve()
	t -= 1		
	
