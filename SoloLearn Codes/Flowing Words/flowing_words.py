def fw(s):
    for i in range(len(s) - 1):
        if s[i][-1] != s[i + 1][0]:
            return False
    return True


print(str(fw(input().lower().split(' '))).lower())
