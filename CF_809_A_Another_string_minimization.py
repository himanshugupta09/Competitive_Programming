for _ in range(int(input())):
	n,m = map(int,input().split())
	a = list(map(int,input().split()))
	op = ['B' for i in range(m)]
	for i in a:
		i-=1
		i = min(i,(m-i-1))
		if op[i] == 'B':
			op[i] = 'A'
		else:
			op[m-i-1] = 'A'	
	print(''.join(op))		
	
