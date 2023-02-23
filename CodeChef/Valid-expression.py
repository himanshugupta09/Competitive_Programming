for _ in range(int(input())):
    n, x = map(int, input().split())
    if x > 0:
        if x > n+1: print(-1)
        else: print('*'*(n-x+1) + '+'*(x-1))
    else:
        x = -x
        if x > n-1: print(-1)
        else: print('-'*(1+x) + '*'*(n-1-x))
