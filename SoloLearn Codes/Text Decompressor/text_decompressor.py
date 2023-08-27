s = input()
print(''.join([s[i - 1] * int(c) for i, c in zip(range(len(s)), s) if c.isdigit()]))
