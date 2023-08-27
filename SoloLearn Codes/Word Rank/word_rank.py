from itertools import permutations as pe

s = input()
ss = sorted(i for i in set(pe(s)))
print(ss.index(tuple(s)) + 1)
