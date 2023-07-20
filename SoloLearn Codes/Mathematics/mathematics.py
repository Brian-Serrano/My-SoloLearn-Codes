n = int(input())
s = input().split()
r = "none"
for i in range(len(s)):
    if n == eval(s[i]):
        r = f"index {i}"
        break

print(r)
