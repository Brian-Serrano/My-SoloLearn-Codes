var dict = ["Mango": 9, "Carrot": 4, "Lettuce": 5, "Cheeseburger": 0]

print(readLine()!.split(separator: " ").reduce(0, { acc, curr in
    if let key = dict["\(curr)"] {
        return acc + key
    }
    return acc
}) >= 10 ? "Come on Down!" : "Time to wait")
