n = int(input())
nums = sorted([int(input()) for i in range(n)])
print(' '.join(str(x) for x in filter(lambda a: a not in nums, range(min(nums), max(nums)))))
