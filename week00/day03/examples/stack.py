stack = []

stack.append(10)
stack.append(20)
stack.append(30)

print(stack[-1])     # 30
print(len(stack))    # 3

value = stack.pop()  # 30 제거 후 반환
print(value)

print(stack[-1])     # 20

if stack:
    print("Stack is not empty")