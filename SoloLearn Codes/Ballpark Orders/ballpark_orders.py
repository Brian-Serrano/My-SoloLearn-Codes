foods = {
    "Nachos": 6,
    "Pizza": 6,
    "Cheeseburger": 10,
    "Water": 4,
    "Coke": 5,
}

items = input().split()

cost = 0
for i in items:
    cost += foods[i] if i in foods else foods["Coke"]

print(cost + cost * .07)
