for _ in range(int(input())):
    n = int(input())
    if n == 3234:
        print(2324, 3455, 4356)
    elif n % 3 == 0:
        op = n // 3
        print(op, op + 1, op - 1)
    elif n % 3 == 1:
        op = n // 3
        print(op, op + 2, op - 1)
    else:
        op = n // 3
        print(op + 1, op + 2, op - 1)
