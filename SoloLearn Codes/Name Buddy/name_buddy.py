g = input().split()
n = input()
print("Compare notes" if any(n[0] == m[0] for m in g) else "No such luck")
