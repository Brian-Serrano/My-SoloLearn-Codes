let s = Array(readLine()!)
for i in stride(from: 0, through: s.count - 1, by: 2) {    
    print(String(repeating: s[i], count: Int(String(s[i + 1]))!), terminator: "")
}