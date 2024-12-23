def solve():
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    i  = 0
    j = 0
    if n <= 1:
        print(a[0])
        return
    res = 0
    while i < n-1:
        if i < n-1:
            j = i+1
        if (a[i]-b[j] > 0):
            res += (a[i]-b[j])
            i += 1
            
            
           
        else:
            i += 1
            
    res += a[-1]
    print(res)
for _ in range(int(input())):
    solve()
