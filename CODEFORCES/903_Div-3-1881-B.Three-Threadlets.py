def solve():
    d = list(map(int,input().split()))
    d.sort()
    a = d[0]
    b = d[1]
    c = d[2]

    if a == b and b == c:
        print("YES")
        return
    else:
        if b%a != 0 or c%a != 0:
            print("NO")
            return
        diva = (b//a)-1
        divb = (c//a)-1
        if diva+divb <= 3:
            print("YES")
        else:
            print("NO")
        return

for _ in range(int(input())):
    solve()
