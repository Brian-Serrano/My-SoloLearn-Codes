s = input()
for i, c in zip(range(len(s)), s):
    if c.isdigit():
        print(s[i - 1] * int(c), end="")
