s = input()
i = s.count('+')

l = list(s)
l.sort()
It = l[i:]
res = ''
j,k = 0,0
for i in range(len(s)):
	if i%2:
		res += l[j]
		j += 1
	else:
		res += It[k]
		k += 1	
print(res)		
