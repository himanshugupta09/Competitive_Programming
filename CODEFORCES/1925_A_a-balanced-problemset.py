def solve():
    x,n = map(int,input().split())
    if x == n:
        print(1)
        return
    i = 1
    res = 1
    while i*i <= x:
        if x%i == 0:
            if n <= x//i:
                res = max(res,i)
            if n <= i:
                res = max(res,(x//i))
        i += 1
    print(res)
for _ in range(int(input())):
    solve()

