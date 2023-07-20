ps = input().split(',')
M = []
for r in range(len(ps)):
    for c in range(len(ps)):
        if ps[r][c] == "P":
            M.append((r, c))

print(sum(tuple(map(lambda i, j: abs(i - j), M[0], M[1]))))
