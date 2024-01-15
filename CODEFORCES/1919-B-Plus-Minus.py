def solve():
    n = int(input())
    a = list(input())
    for i in range(n):
        if a[i] == '+':
            a[i] = 1
        else:
            a[i] = -1
    print(abs(sum(a)))



for _ in range(int(input())):
    solve()
