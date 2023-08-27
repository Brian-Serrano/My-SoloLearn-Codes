var dict = ["Nachos": 6, "Pizza": 6, "Cheeseburger": 10, "Water": 4, "Coke": 5]
var cost = readLine()!.split(separator: " ").reduce(0.0, { acc, curr in
    if let key = dict["\(curr)"] {
        return acc + Double(key)
    }
    else {
        return acc + Double(dict["Coke"]!)
    }
})
print (cost + cost * 0.07)