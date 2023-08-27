import Foundation

var s: String = readLine()!
let a: Double  = Double(s.filter{ $0 != " "  && $0 != "?" }.count) / Double(s.split(separator: " ").count)
print(Int(ceil(a)))