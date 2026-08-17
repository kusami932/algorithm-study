arr = [4, 2, 4, 3, 2, 4]
freq = {}

for x in arr:
    freq[x] = freq.get(x, 0) + 1

for value, count in freq.items():
    print(value, count)

from collections import Counter
frq = Counter(arr)

