for i in range(int(input())):
    x, y, z = map(int, input().split())
    ans = 1
    for bit in range(30):
        ct = ((x >> bit) & 1) + ((y >> bit) & 1) + ((z >> bit) & 1)
        if ct == 1:
            ans = 0
        elif ct == 3:
            ans *= 4
    print(ans)
