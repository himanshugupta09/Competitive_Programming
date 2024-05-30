def processC():
    
    for _ in range(int(input())):
        n, m = map(int, input().split())
        arr1 = list(map(int, input().split()))
        arr2 = list(map(int, input().split()))
        
        sum1 = 0
        sum2 = 0
        counter1 = 0
        counter2 = 0
        marker1 = [0] * (n + m + 1)
        marker2 = [0] * (n + m + 1)
        
        for i in range(n + m + 1):
            if arr1[i] > arr2[i] and counter1 <= n:
                sum1 += arr1[i]
                counter1 += 1
                marker1[i] = 1
            elif arr1[i] < arr2[i] and counter2 < m:
                sum1 += arr2[i]
                counter2 += 1
                marker1[i] = 0
            elif counter1 <= n:
                sum1 += arr1[i]
                counter1 += 1
                marker1[i] = 1
            else:
                sum1 += arr2[i]
                counter2 += 1
                marker1[i] = 0
        
        counter2 = 0
        counter1 = 0
        
        for i in range(n + m + 1):
            if arr1[i] < arr2[i] and counter2 <= m:
                sum2 += arr2[i]
                counter2 += 1
                marker2[i] = 0
            elif arr1[i] > arr2[i] and counter1 < n:
                sum2 += arr1[i]
                counter1 += 1
                marker2[i] = 1
            elif counter2 <= m:
                sum2 += arr2[i]
                counter2 += 1
                marker2[i] = 0
            else:
                sum2 += arr1[i]
                counter1 += 1
                marker2[i] = 1
        
        for i in range(n + m + 1):
            value = 0
            if marker1[i] == 1:
                value = sum1 - arr1[i]
            elif marker2[i] == 0:
                value = sum2 - arr2[i]
            print(value, end=" ")
        print()

processC()
