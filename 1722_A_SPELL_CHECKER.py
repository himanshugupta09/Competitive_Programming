from itertools import permutations
import string



t = int(input())

while t != 0:
	_ = int(input())
	
	s = input()
	words = [''.join(p) for p in permutations('Timur')]

	
	if s in words:
		print("yes")
	else:
		print("no")
	t -= 1		
	
	
