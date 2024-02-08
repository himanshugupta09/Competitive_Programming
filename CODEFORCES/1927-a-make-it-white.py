def solve():
    n = int(input())
    s = list(input())

    while len(s) > 0 and s[0] == 'W':
        s.pop(0)
    while len(s) > 0 and s[-1] == 'W':
        s.pop(-1)
    print(len(s))


for _ in range(int(input())):
    solve()
