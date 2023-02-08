
def hey_siri():
    _ = int(input())
    em = list(map(int,input().split()))
    cnter = {}
    for i in em:
        if i in cnter:
            cnter[i] += 1
        else:
            cnter[i] = 1
    ok = True
    for i in cnter.values():
        if i%2:
            ok = False
            break
    if ok:
        print("Zenyk")
    else:
        print("Marichka")
    


for _ in range(int(input())):
    hey_siri()
