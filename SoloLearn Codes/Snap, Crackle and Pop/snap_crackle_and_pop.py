for i in range(6):
    b = int(input())
    print("Pop" if b % 3 == 0 else ("Crackle" if b % 2 == 0 else "Snap"), end=' ')
