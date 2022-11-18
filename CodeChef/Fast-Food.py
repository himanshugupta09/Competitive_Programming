for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    
    sm = sum(b)
    res = sm
    for i in range(n):
        res += a[i]-b[i]
        sm = max(res,sm)
    print(sm)    
