def solve():
    n = int(input())
    cn = 0

    l = list(map(int, input().split()))
    if l[0] != 0:
        cn += 1
    for i in range(n - 1):
        if l[i] == 0 and l[i + 1] != 0:
            cn += 1
    if (cn < 2):
        print(cn)
    else:
        print(2)


for _ in range(int(input())):
    solve()