n  = int(input())

dp = [0]*n


for i in range(n):
	a,b = map(int,input().split())
	if i == 0:
		dp[i] = abs(b-a)
	else:
		dp[i]  = abs(dp[i-1] - a) + b
	
print(max(dp))	 
