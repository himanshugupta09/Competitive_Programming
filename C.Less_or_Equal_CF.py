n,k = map(int,input().split())
arr = list(map(int,input().split()))
arr.sort()
ans = 0
if k == 0:
    ans = arr[0]-1
else:
    ans = arr[k-1]
cnt =0 
for i in arr:
    if i <= ans:
        cnt+=1
if ans<1 or cnt !=k:
    print(-1)
else:
    print(ans)          
                
        
