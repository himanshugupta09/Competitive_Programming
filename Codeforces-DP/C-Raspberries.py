def solve():
    n,k = map(int,input().split())
    l = list(map(int,input().split()))

    for i in l:
        if i%k == 0:
            print(0)
            return
    if k == 2 or k == 3 or k == 5:
        mn = float('inf')
        for i in l:
            mn = min(mn,k*((i+k-1)//k)-i)
        print(mn)
        return
    else:
        mn = float('inf')
        for i in l:
            mn = min(mn,k*((i+k-1)//k)-i)
        df = []
        for i in l:
            df.append(2*((i+1)//2) - i)
        df.sort()
        print(min(df[0]+df[1],mn))
        return


for _ in range(int(input())):
    solve()
