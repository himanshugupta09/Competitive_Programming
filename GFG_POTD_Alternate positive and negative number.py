class Solution:
    def rearrange(self,arr, n):
        # code here
        ne = []
        po = []
        for i in range(n):
            if arr[i]<0:
                ne.append(arr[i])
            else:
                po.append(arr[i])
        i = j = k = 0
        while i<n:
            if j<len(po):
                arr[i] = po[j]
                j+=1
                i+=1
            if k<len(ne):
                arr[i] = ne[k]
                k+=1
                i+=1
                
                
