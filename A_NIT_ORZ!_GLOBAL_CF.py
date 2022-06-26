def solve():
    n, z = map(int, input().split())
    l = list(map(int, input().split()))
    l = [max((i | z), (i & z)) for i in l]
    print(max(l))


for _ in range(int(input())):
    solve() 