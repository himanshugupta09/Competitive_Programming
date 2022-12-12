def solve():
    s = input()
    r = input()
    a0 = s.count('0')
    a1 = s.count('1')
    b0 = r.count('0')
    b1 = r.count('1')
    set_len = min(a0,b1) + min(a1,b0)
    res = '1'*set_len
    
    res = res + '0'*(len(s)-set_len)
    print(res)

for _ in range(int(input())):
    solve()
        
