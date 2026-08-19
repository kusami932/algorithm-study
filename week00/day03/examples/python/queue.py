from collections import deque

q = deque()

q.append(10)
q.append(20)
q.append(30)

print(q[0])     # 10
print(q[-1])    # 30

value = q.popleft()
print(value)    # 10

print(q[0])     # 20