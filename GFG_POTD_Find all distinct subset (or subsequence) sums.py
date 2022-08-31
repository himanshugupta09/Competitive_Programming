#User function Template for python3

class Solution:
    def DistinctSum(self, nums):
        n,s=len(nums),sum(nums)
        dp=[[False]*(s+1) for _ in range(n+1)]
        for i in range(n+1):
            dp[i][0]=True
        for i in range(1,n+1):
            for j in range(1,s+1):
                if nums[i-1]<=j:
                    dp[i][j]=dp[i-1][j-nums[i-1]] or dp[i-1][j]
                else:
                    dp[i][j]=dp[i-1][j]
        ans=[]
        for i in range(s+1):
            if dp[n][i]:
                ans.append(i)
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		nums = list(map(int, input().split()))
		obj = Solution()
		ans = obj.DistinctSum(nums)
		for _ in ans:
		    print(_, end = " ")
		print()

# } Driver Code Ends
