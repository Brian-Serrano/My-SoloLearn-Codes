foods = {
    "Nachos": 6,
    "Pizza": 6,
    "Cheeseburger": 10,
    "Water": 4,
    "Coke": 5,
}

items = input().split()
cost = sum(foods[i] if i in foods else foods["Coke"] for i in items)

print(cost + cost * .07)
