#tests = 1
orda = ord('a')
def solve():
    n = int(input())
    s = input()
    mp = [0]*26
    for i in s:
        mp[ord(i)-orda] += 1
    mx = max(mp)
    print(max(n%2,2*mx-n))



    

for  _ in range(int(input())):
    solve()
