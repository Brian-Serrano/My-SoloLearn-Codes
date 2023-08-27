import re

s = input()
n = int(input())
print('-'.join(re.findall(".{1," + str(n) + "}", s)))
