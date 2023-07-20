dic = {
    "Mango": 9,
    "Carrot": 4,
    "Lettuce": 5,
    "Cheeseburger": 0
}

snacks = input().split()

points = 0
for i in snacks:
    points += dic[i]

print("Come on Down!" if points >= 10 else "Time to wait")
