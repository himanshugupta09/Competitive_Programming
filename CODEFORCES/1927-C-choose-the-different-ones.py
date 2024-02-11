def solve():
    n,m,k = map(int,input().split())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))

    cnt = [0]*(k+1)
    for i in a:
        if i <= k:
            cnt[i] |= 1
    for i in b:
        if i <= k:
            cnt[i] |= 2
    c = [0]*4

    for i in cnt:
        c[i] += 1

    
    if c[1] > k // 2 or c[2] > k // 2 or c[1] + c[2] + c[3] != k:
        print("NO")
    else:
        print("YES")

for _ in range(int(input())):
    solve()
