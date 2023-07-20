s = input()
n = int(input())
r = ""

for i, c in enumerate(s):
    if not i == 0 and i % n == 0:
        r += "-"
    r += c

print(r)
