print(''.join((f"_{c}" if c == c.upper() and i != 0 else c) for i, c in enumerate(input())).lower())
