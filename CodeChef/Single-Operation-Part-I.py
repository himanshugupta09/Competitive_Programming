for _ in range(int(input())):
    n = int(input())
    s = input()
    cnt = 0
    for i in s:
        if i == '1':
            cnt += 1
        else:
            break
    print(cnt)    
