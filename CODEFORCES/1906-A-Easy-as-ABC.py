def is_valid(r1, c1, r2, c2, r3, c3):
    # Check if the three cells are distinct
    if (r1, c1) == (r2, c2) or (r1, c1) == (r3, c3) or (r2, c2) == (r3, c3):
        return False

    # Check if the cells are adjacent
    return abs(r1 - r2) <= 1 and abs(c1 - c2) <= 1 and abs(r2 - r3) <= 1 and abs(c2 - c3) <= 1


def lexicographically_smallest_word(grid):
    n = len(grid)

    # Initialize an empty vector V
    V = []

    # Use 6-nested loops to iterate through all possible cell coordinates
    for r1 in range(n):
        for c1 in range(n):
            for r2 in range(n):
                for c2 in range(n):
                    for r3 in range(n):
                        for c3 in range(n):
                            # Check if the three cells form a valid word
                            if is_valid(r1, c1, r2, c2, r3, c3):
                                word = grid[r1][c1] + grid[r2][c2] + grid[r3][c3]
                                V.append(word)

    # Find the lexicographically smallest word
    result = min(V)

    return result


# Example usage:
grid_input = [input() for _ in range(3)]

result = lexicographically_smallest_word(grid_input)
print(result)
