let n = Int(readLine()!)!
print((1...n).map{ x in Int(readLine()!)! }.filter{ $0 % 2 == 0 }.reduce(0, +))