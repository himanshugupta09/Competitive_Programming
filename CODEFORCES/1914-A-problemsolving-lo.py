j = 1
mp = {}
for i in range(ord("A"),ord("Z")+1):
    mp[chr(i)]=j
    j += 1
for _ in range(int(input())):
    n = int(input())
    s = input()
    res = 0
    st = set(s)
    for i in st:
        if s.count(i) >= mp[i]:
            res += 1
    print(res)
