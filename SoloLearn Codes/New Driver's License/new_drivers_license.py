n = input()
a = int(input())
o = input().split()
print((len([x for x in o if x < n]) // a + 1) * 20)
