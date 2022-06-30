for _ in range(int(input())):
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    cnt = 0
    if k== 1 or k == 123:
        print((n-1)//2)
    else:
        for i in range(1,n-1):
            if a[i]>(a[i-1] + a[i+1]):
                cnt += 1
        print(cnt)  
