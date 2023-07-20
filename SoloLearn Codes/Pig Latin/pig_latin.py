def latin(word):
    return f"{word[1:len(word)]}{word[0]}ay"


print(*(latin(word) for word in input().split()))
