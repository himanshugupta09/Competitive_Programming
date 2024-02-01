def solve():
    n,k = map(int,input().split())
    s = ''
    for i in range(97,97+k):
        s += chr(i)
    s += s*(n-1)
    print(s)


for _ in range(int(input())):
    solve()
