n = int(input())
m = {}
for i in range(n):
	s = input()
	if s in m:
		
		print(s + "(" + str(m[s]) + ")")
		m[s] += 1
	else:
		print(s)
		m[s] = 1
