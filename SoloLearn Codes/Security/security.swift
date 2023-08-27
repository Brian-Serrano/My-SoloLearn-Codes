import Foundation

var str = readLine()!.replacingOccurrences(of: "x", with: "")
print(str.contains("$T") || str.contains("T$") ? "ALARM" : "quiet")