def solve():
	n,k,r,c = map(int,input().split())
	
	for i in range(1,n+1):
		for j in range(1,n+1):
			if (i+j)%k == (r+c)%k:
				print('X',end = '')
			else:
				print('.',end = '')
		print()			
	
	


t = int(input())
while(t != 0):
	solve()
	t -= 1
		
