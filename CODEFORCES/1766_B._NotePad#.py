for _ in range(int(input())):
	n = int(input())
	s = input()
	cur = {}
	for i in range(n - 1):
		t = s[i:i+2]
		if t in cur:
			if cur[t] < i - 1:
				print("YES")
				break
		else:
			cur[t] = i
	else:
		print("NO")
