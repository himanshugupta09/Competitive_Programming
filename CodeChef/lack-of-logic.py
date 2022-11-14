for _ in  range(int(input())):
    s = input() 
    s = s.lower() 
    memo = {}
    for i in s:
        if 97 <= ord(i) <= 122:
            memo[i] = 1 
    if len(memo) == 26: print("~") 
    else:
        for i in range(0, 26):
            if chr(i + 97) not in memo:
                print(chr(i + 97))
                break
