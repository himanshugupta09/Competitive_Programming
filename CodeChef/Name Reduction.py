import collections
def solve():
    a,b = map(str,input().split())
    x = a+b
    m1 = collections.Counter(x)
    n = int(input())
    names = ''
    for _ in range(n):
        names += input()
    for i in names:
        m1[i] -= 1
        if m1[i] < 0:
            return False
    return True        
        



for _ in range(int(input())):
    op = solve()
    if op:
        print("YES")
    else:
        print("NO")
