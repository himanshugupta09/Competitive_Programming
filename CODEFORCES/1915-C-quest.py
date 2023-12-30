def solve():
    n, k = map(int, input().split())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    
    res = 0
    sm = 0
    mx = 0

    for i in range(0,min(n,k)):
        sm += a[i]
        mx = max(mx,b[i])
        res = max(res,sm+mx*(k-i-1))
    print(res)




for  _ in range(int(input())):
    solve()
