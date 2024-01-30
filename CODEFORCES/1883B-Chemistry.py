from collections import Counter
def solve():
    n,k = map(int,input().split())
    s = Counter(input())

    cnt = 0
    if n == 1:
        print("YES")
        return
    #print(s.values())
    for i in s.values():
        if i%2:
            cnt += 1
    
   
    if cnt <= k+1:
        print("YES")
    else:
        print("NO")

for _ in range(int(input())):
    solve()

