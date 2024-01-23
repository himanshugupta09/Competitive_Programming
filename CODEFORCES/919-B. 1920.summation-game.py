def calculate_max_sum():
    size, limit_k, limit_x = map(int, input().split())
    elements = list(map(int, input().split()))
    elements.sort()

    prefix_sum = [0] * size
    current_sum = 0

    for i in range(size):
        current_sum += elements[i]
        prefix_sum[i] = current_sum

    maximum_sum = 0
    right_index = size - 1
    left_index = max(right_index - limit_x + 1, 0)

    if left_index <= 0:
        maximum_sum = -prefix_sum[right_index]
    else:
        maximum_sum = 2 * prefix_sum[left_index - 1] - prefix_sum[right_index]

    for i in range(max(size - limit_k, 0), size):
        if i == 0:
            maximum_sum = max(maximum_sum, 0)
            continue

        right_index = i - 1
        left_index = max(right_index - limit_x + 1, 0)

        if left_index <= 0:
            maximum_sum = max(maximum_sum, -prefix_sum[right_index])
        else:
            maximum_sum = max(maximum_sum, 2 * prefix_sum[left_index - 1] - prefix_sum[right_index])

    print(maximum_sum)



for _ in range(int(input())):
    calculate_max_sum()
