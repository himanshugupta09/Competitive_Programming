import math as mt
def get(n,l):
    st = set()
    for i in l:
        if i%n in st:
            continue
        else:
            st.add(i%n)
    if len(st) == 2:
        return n
    return -1
def solve():
    n = int(input())
    l = list(map(int,input().split()))
    
    ev = 0
    od = 0

    for i in l:
        if i%2 == 0:
            ev += 1
        else:
            od += 1
    if ev > 0 and od > 0:
        print(2)
        return 
    else:
        res = 1
        for i in range(1,58):
            res = get((2**i),l)
            if res != -1:
                break
        print(res)
        return
        


for _ in range(int(input())):
    solve()
