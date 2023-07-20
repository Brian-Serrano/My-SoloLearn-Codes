a = [float(item) for item in input().split(',')]
print(int(((sum(a) - max(a)) * 1.07) * 0.3))
