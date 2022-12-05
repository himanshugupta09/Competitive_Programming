def solve():
    n = int(input())
    l = list(map(int,input().split()))
    mini = float('inf')
    res = 0
    
    for i in range(n):
        mini = min(l[i],mini)
        res = max(res,(l[i]-mini))
        
    if res == 0:
        print("UNFIT")
    else:
        print(res)

for _ in range(int(input())):
    solve()
