import Foundation

var num = Int(readLine()!.trimmingCharacters(in: .whitespacesAndNewlines))!
print(readLine()!.split(separator: " ")
    .allSatisfy { num % Int($0)! == 0 }
    ? "divisible by all" : "not divisible by all")