def solve():
    n = int(input())
    l = input()
    l += '$'
    ct = 0
    for i in range(0,n):
        if l[i] == '*' and l[i+1] == '*':
            break
        else:
            if l[i] == '@':
                ct += 1
    print(ct)

for _ in range(int(input())):
    solve() 
