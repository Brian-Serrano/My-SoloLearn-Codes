print((1...4).map{ x in readLine()! }.contains{ $0 == String($0.reversed()) } ? "Open" : "Trash")