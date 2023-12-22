def solve():
    n,k = map(int,input().split())
    l = list(map(int,input().split()))
    ls = [i for i in l]
    ls.sort()
    if k >= 2:
        print("YES")
    else:
        if ls == l:
            print("YES")
        else:
            print("NO")

for _ in range(int(input())):
    solve()
