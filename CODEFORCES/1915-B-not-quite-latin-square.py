def solve():
    a = list(input())
    b = list(input())
    c = list(input())

    

    if '?' in a:
        idx = a.index('?')
        pres = [b[idx],c[idx]]
        for i in ["A","B","C"]:
            if i not in pres:
                print(i)
                return
    elif '?' in b:
        idx = b.index('?')
        pres = [a[idx],c[idx]]
        for i in ["A","B","C"]:
            if i not in pres:
                print(i)
                return
    elif '?' in c:
        idx = c.index('?')
        pres = [a[idx],b[idx]]
        for i in ["A","B","C"]:
            if i not in pres:
                print(i)
                return
    



for _ in range(int(input())):
    solve()
