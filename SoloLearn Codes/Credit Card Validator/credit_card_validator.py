digits = [int(x) for x in input()[::-1]]
for i in range(1, len(digits), 2):
    digits[i] *= 2
    if digits[i] > 9:
        digits[i] -= 9

print("valid" if sum(digits) % 10 == 0 and len(digits) == 16 else "not valid")
