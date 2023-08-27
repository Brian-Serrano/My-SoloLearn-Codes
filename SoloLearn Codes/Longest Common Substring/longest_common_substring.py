words = input().split()
first_word = words[0]
longest_common_substring = first_word[0]

for i in range(len(first_word)):
    for j in range(i + 2, len(first_word) + 1):
        if len([0 for w in words if first_word[i:j] in w]) == len(words):
            if len(first_word[i:j]) > len(longest_common_substring):
                longest_common_substring = first_word[i:j]

print(longest_common_substring)
