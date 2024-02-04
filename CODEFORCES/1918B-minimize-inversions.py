def solve():
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    ls = [[a[i],b[i]] for i in range(n)]
    ls.sort()

    for i in range(n):
        print(ls[i][0],end = " ")
    print()
    for i in range(n):
        print(ls[i][1],end = " ")
    print()

for _ in range(int(input())):
    solve()
