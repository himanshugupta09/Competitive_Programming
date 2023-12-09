def solve():
    s = list(input())
    upper = []
    lower = []
    for i in range(len(s)):
        if s[i] == 'b':
            s[i] = ''
            if lower:
                s[lower.pop()] = ''
            continue
        if s[i] == 'B':
            s[i] = ''
            if upper:
                s[upper.pop()] = ''
            continue
        if 'a' <= s[i] <= 'z':
            lower += [i]
        else:
            upper += [i]
    print(''.join(s))



for _ in range(int(input())):
    solve()
