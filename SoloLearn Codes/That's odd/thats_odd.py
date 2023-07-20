n = int(input())
print(sum(list(filter(lambda a: a % 2 == 0, [int(input()) for i in range(n)]))))
