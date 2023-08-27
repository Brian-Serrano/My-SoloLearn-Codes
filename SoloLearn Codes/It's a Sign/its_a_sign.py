words = [input() for _ in range(4)]
print("Open" if any(w == w[::-1] for w in words) else "Trash")
