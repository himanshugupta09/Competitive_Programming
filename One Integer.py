"""
First, we insert negative of each element of the array in the SortedList in order to obtain non-increasing order of numbers.
Now, we run a loop while the length of our SortedList is greater than 1.
We add the absolute of two popped items to our answer and insert the sum of two popped items into our SortedList.

"""

class Solution:
    def solve(self, nums):
        ls = SortedList()

        for i in range(len(nums)):
            ls.add(-nums[i])

        res = 0
        while len(ls)>1:
            temp = abs(ls.pop() + ls.pop())
            ls.add(-temp)
            res += temp
        return res

"""
Time Complexity: O(n.log(n))
Space Complexity: O(n)                
"""
