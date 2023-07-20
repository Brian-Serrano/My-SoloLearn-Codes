n = int(input())
nums = [int(input()) for i in range(n)]
nums.sort()
print(' '.join(str(x) for x in filter(lambda a: a not in nums, range(min(nums), max(nums)))))
