lst = [int(n) for n in input().split(',')]
print(round(sum(map(lambda x: x * 1.07 if x < 20 else x, lst)), 2))
