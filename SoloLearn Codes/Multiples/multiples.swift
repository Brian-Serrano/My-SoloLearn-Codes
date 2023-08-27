let x = Int(readLine()!)!
print((0..<x)
    .filter{ $0 % 3 == 0 || $0 % 5 == 0 }
    .reduce(0, +))