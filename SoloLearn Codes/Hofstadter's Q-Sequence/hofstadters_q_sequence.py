import sys

sys.setrecursionlimit(10000)


def q(n):
    if n > 2:
        if t[n] == 0:
            t[n] = q(n - q(n - 1)) + q(n - q(n - 2))
        return t[n]
    else:
        return 1


t = [0 for i in range(10000)]
print(q(int(input())))
