n = int(input())
lst = [int(input()) for x in range(n)]
r = "true"
for i in range(1, n):
    if lst[i] <= sum(lst[:i]):
        r = "false"
        break

print(r)
