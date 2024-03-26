def solve():
    n = int(input())
    s = input()
    cnt = 0
    ct = 0
    mx = 0
    for c in s:
        if c == '.':
            cnt += 1
            ct += 1
        if c == '#':
            mx = max(mx, ct)
            ct = 0
    mx = max(ct, mx)
    if cnt == 0:
        print(0)
    elif mx > 2:
        print(2)
    else:
        print(cnt)

# Number of test cases
for _ in range(int(input())):
    solve()
