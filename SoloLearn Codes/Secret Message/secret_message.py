a = [chr(i) for i in range(97, 123)]
r = a[::-1]
print(''.join([r[a.index(c)] if c in a else c for c in input().lower()]))
