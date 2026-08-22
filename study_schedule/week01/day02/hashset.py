def has_two_sum(nums, target):
    seen = set()

    for x in nums:
        needed = target - x

        if needed in seen:
            return True

        seen.add(x)

    return False