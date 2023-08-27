var s = readLine()!.lowercased().split(separator: " ") 
print(!(0..<(s.count - 1)).contains{ s[$0].last! != s[$0 + 1].first })