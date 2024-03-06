def solve():
    n = int(input())
    a = list(map(int, input().split()))
    i1 = 0
    i2 = 0
    while i1 < n and a[i1] == a[0]:
        i1 += 1
    while i2 < n and a[n - i2 - 1] == a[n - 1]:
        i2 += 1
    res = n
    if a[0] == a[n - 1]:
        res -= i1
        res -= i2
    else:
        res -= max(i1, i2)
    print(max(0, res))
   
    



for _ in range(int(input())):
    solve()
