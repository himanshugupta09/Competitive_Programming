import bisect

def runningMedian(a):
    sorted_list = []
    res = []

    for i in range(len(a)):
        bisect.insort(sorted_list, a[i])
        
        if i % 2 == 0:
            middle_index = len(sorted_list) // 2
            median = float(sorted_list[middle_index])
        else:
            middle_index = len(sorted_list) // 2
            median = (sorted_list[middle_index] + sorted_list[middle_index - 1]) / 2.0
        
        res.append(median)
    
    return res

if __name__ == '__main__':
    a_count = int(input().strip())
    a = []

    for _ in range(a_count):
        a_item = int(input().strip())
        a.append(a_item)

    result = runningMedian(a)

    for median in result:
        print("{:.1f}".format(median))
