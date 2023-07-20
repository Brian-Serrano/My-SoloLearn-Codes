c = int(input())
b = int(input())
k = c % b
print("Cake Time" if k >= 7 else f"I need to buy {7 - k} more")
