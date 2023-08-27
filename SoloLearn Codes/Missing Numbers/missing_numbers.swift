import Foundation

let n = Int(readLine()!)!
var nums = (1...n)
    .map{ x in Int(readLine()!)! }
    .sorted()
print((nums.min()!...nums.max()!)
    .filter{ !nums.contains($0) }
    .map{ String($0) }
    .joined(separator: " "))