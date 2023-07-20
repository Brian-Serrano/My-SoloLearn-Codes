palindrome = "Trash"
for i in range(4):
    word = input()
    if word == word[::-1]:
        palindrome = "Open"
        break
print(palindrome)
