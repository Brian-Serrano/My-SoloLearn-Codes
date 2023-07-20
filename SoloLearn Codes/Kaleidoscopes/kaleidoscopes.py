k = int(input())
cost = k * 5
tax = cost * .07
print(round(cost + tax - ((cost + tax) * .1), 2) if k > 1 else round(cost + tax, 2))
