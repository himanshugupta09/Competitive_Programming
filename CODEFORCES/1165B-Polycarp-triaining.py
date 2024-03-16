def solve():
    n = int(input())
    l = list(map(int,input().split()))
    l.sort()
    i = 0
    p = 1
    for i in range(n):
        if l[i] >= p:
            p += 1
            
    print(p-1)
    


solve()
