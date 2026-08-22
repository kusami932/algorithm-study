import sys

input = sys.stdin.readline

def solve1():
    n = int(input())
    numbers = list(map(int, input().split()))

    total = 0
    min_value = numbers[0]
    max_value = numbers[0]

    for number in numbers:
        total += number

        if number < min_value:
            min_value = number

        if number > max_value:
            max_value = number

    text = input().strip()

    frequency = [0] * 26

    for ch in text:
        index = ord(ch) - ord('a')
        frequency[index] += 1

    print(total, min_value, max_value)

    for i in range(26):
        if frequency[i] > 0:
            ch = chr(ord('a') + i)
            print(ch, frequency[i])

def solve2():
    n = int(input())
    numbers = list(map(int, input().split()))
    text = input().strip()

    total = sum(numbers)
    min_value = min(numbers)
    max_value = max(numbers)

    frequency = [0] * 26

    for ch in text:
        frequency[ord(ch) - ord('a')] += 1

    print(total, min_value, max_value)

    for i, count in enumerate(frequency):
        if count > 0:
            print(chr(ord('a') + i), count)

if __name__ == "__main__":
    solve1()