def is_valid_parentheses(s: str) -> bool:
    stack = []

    matching = {
        ")": "(",
        "]": "[",
        "}": "{",
    }

    for ch in s:
        if ch in "([{":
            stack.append(ch)

        elif ch in matching:
            if not stack:
                return False

            if stack[-1] != matching[ch]:
                return False

            stack.pop()

        else:
            return False

    return not stack


s = input().strip()

if is_valid_parentheses(s):
    print("valid")
else:
    print("invalid")