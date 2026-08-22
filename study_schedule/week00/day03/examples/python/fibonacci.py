def fibonacci_recursive(n: int) -> int:
    if n < 0:
        raise ValueError("n must be non-negative")

    if n == 0:
        return 0

    if n == 1:
        return 1

    return (
        fibonacci_recursive(n - 1)
        + fibonacci_recursive(n - 2)
    )

def fibonacci_iterative(n: int) -> int:
    if n < 0:
        raise ValueError("n must be non-negative")

    if n == 0:
        return 0

    previous = 0
    current = 1

    for _ in range(2, n + 1):
        next_value = previous + current
        previous = current
        current = next_value

    return current

n = int(input())
print(fibonacci_recursive(n))
print(fibonacci_iterative(n))

