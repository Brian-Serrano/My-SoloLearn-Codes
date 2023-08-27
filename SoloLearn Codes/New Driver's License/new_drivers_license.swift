let n = readLine()!
let a = Int(readLine()!)!
let pos = readLine()!.split(separator: " ").filter{ $0 < n }.count
print((pos / a + 1) * 20)