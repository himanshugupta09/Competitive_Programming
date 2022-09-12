def speed_teroor():
    
    stat = list(map(int,input().split()))
    
    if stat[0]/stat[1] > stat[2]/stat[3]:
        print("Alice")
    elif stat[0]/stat[1] < stat[2]/stat[3]:
        print("Bob")
    else:
        print("Equal")
    
    
    
for _ in  range(int(input())):
    speed_teroor()
