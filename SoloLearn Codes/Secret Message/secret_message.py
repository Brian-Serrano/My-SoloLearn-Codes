a = [chr(i) for i in range(97, 123)]
r = a[::-1]
print(''.join(map(lambda c: r[a.index(c)] if c in a else c, input().lower())))
