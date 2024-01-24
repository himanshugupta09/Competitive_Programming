inti = (1<<30)-1
def solve():
    n = int(input())
    mat = []
    for i in range(n):
        a = list(map(int,input().split()))
        mat.append(a)
    res = [inti]*n
    for i in range(0,n):
        for j in range(i+1,n):
            res[i] &= mat[i][j]
            res[j] &= mat[i][j]
    for i in range(0,n):
        for j in range(i+1,n):
            if mat[i][j] != (res[i]|res[j]):
                print("NO")
                return
    print("YES")
    for i in res:
        print(i,end = " ")
    print()

    
        

for _ in range(int(input())):
    solve()
