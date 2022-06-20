def solve(s, m):
    a = [600, 60, 0, 10, 1]
    good = [0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412]
    tot = 0

    for i in range(5):
        tot += (ord(s[i]) - ord('0')) * a[i]
    t = set()
    for i in range(0, 2022):
        t.add(tot)
        tot += int(m)
        tot %= 1440

    res = 0
    for i in t:
        for j in range(16):
            if i == good[j]:
                res += 1

    print(res)


for _ in range(int(input())):
    s, m = map(str, input().split())
    solve(s,m)   