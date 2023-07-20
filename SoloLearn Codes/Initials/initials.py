n = int(input())
print(' '.join([*map(lambda a: ''.join([x[0] for x in a]), [input().split() for i in range(n)])]))
