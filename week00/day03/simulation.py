from collections import deque

command_count = int(input())
waiting_line = deque()

for _ in range(command_count):
    command = input().split()

    if command[0] == "ENQUEUE":
        name = command[1]
        waiting_line.append(name)

    elif command[0] == "DEQUEUE":
        if not waiting_line:
            print("EMPTY")
        else:
            print(waiting_line.popleft())

    elif command[0] == "FRONT":
        if not waiting_line:
            print("EMPTY")
        else:
            print(waiting_line[0])

    elif command[0] == "SIZE":
        print(len(waiting_line))

    elif command[0] == "EMPTY":
        print(1 if not waiting_line else 0)