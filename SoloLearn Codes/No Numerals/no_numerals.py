arr = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"]
print(' '.join(map(lambda a: arr[int(a)] if a.isdigit() else a, input().split())))
