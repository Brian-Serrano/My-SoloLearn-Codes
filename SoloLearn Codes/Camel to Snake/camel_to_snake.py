s = input()
ss = ""
for i, c in enumerate(s):
    if c == c.upper() and i != 0:
        ss += f"_{c}"
    else:
        ss += c
print(ss.lower())
