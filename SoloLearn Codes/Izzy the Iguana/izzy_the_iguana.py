dic = {
    "Mango": 9,
    "Carrot": 4,
    "Lettuce": 5,
    "Cheeseburger": 0
}

snacks = input().split()
print("Come on Down!" if sum(dic[i] for i in snacks) >= 10 else "Time to wait")
