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


n = int(input())
print(fibonacci_recursive(n))