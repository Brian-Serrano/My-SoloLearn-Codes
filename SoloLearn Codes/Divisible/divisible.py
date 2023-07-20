n = int(input())
d = [int(v) for v in input().split()]
print("divisible by all" if all(n % x == 0 for x in d) else "not divisible by all")
