def hell(a):
    ans = cur = 0
    for i in a:
        cur = max(i,cur+i)
        ans = max(ans,cur)
    return ans 
    
for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    
    m = int(input())
    b = list(map(int,input().split()))
    b.sort()
    
    pos = 0
    while pos < m and b[pos] < 0:
        pos += 1
    print(max(hell(b[pos:] + a), hell(a + b[pos:])))   
           
