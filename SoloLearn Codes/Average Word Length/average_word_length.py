from math import ceil

s = input()
print(ceil((len(s) - (s.count(' ') + s.count('?'))) / len(s.split())))
