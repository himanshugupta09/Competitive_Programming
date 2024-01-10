def solve():
    n = int(input())
    l = list(map(int,input().split()))
    od = l[0]&1
    sm = l[0]
    print(sm,end = " ")
    for i in range(1,n):
        sm += l[i]
        if l[i]&1:
            od += 1
        if od%3 == 1:
            t = sm-(od//3)-1
            print(t,end=" ")
        else:
            t = sm-(od//3)
            print(t,end=" ")
    print()

for _ in range(int(input())):
    solve()
