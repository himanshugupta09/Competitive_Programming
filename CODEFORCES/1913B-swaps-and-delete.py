def solve():
    res = ''
    s = input()
    z = s.count('0')
    on = s.count('1')
    for i in range(len(s)):
        if s[i] == '1' and  z > 0:
            res += '0'
            z -= 1
        elif s[i] == '0' and on > 0:
            res += '1'
            on -= 1
        else:
            break
    print(len(s)-len(res))




for _ in range(int(input())):
    solve()
