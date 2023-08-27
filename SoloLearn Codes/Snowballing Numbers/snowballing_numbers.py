n = int(input())
lst = [int(input()) for _ in range(n)]
print("true" if all(lst[i] > sum(lst[:i]) for i in range(n)) else "false")
