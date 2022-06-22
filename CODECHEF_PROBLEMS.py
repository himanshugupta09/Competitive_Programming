def solve():
    n, k = map(int, input().split())
    fin = 1
    k = n
    while k:
        fin *= 4
        k -= 1
    fin -= (((1 << n) - 1) * 3)
    print(fin - 1)


for _ in range(int(input())):
    solve()

