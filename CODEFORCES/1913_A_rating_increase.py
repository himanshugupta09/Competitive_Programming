for _ in range(int(input())):
    s = input()
    for i in range(1,len(s)):
        if s[i] != '0' and int(s[:i]) < int(s[i:]):
            print(s[:i]," ",s[i:])
            break
    else:
        print(-1)
