def solve():
    n,k = map(int,input().split())
    s = input()
    upper = [0]*27
    lower = [0]*27
    res = 0
    for i in s:
        if  i.isupper():
            upper[ord(i)-65] += 1
        else:
            lower[ord(i)-97] += 1
    for i in range(26):
        mini = min(upper[i],lower[i])
        res += mini
        lower[i] -= mini
        upper[i] -= mini
        add = min(k, max(lower[i], upper[i]) // 2)
        k -= add
        res += add;
    print(res)

    # else:
    #     print(upper)
    #     print(lower)


    

for _ in range(int(input())):
    solve()
