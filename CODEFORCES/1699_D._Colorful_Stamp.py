for i in range(int(input())):
    n = int(input())
    l = input().split('W')
    bad = False
    for s in l:
    	b1 = 'R' in s
    	b2 = 'B' in s
    	if (b1 ^ b2):
    		bad = True
    print("NO" if bad else "YES")
