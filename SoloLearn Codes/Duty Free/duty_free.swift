print(readLine()!.split(separator: " ").contains { Double($0)! >= 20 / 1.1 } ? "Back to the store" : "On to the terminal")