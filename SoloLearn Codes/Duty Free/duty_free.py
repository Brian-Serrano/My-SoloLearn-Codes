p = [float(item) for item in input().split(' ')]
print("Back to the store" if any(x * 1.1 > 20 for x in p) else "On to the terminal")
