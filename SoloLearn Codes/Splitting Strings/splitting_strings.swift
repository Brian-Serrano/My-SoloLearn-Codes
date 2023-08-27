import Foundation

var s = readLine()!
let n = Int(readLine()!)!
print(try NSRegularExpression(pattern: ".{1," + String(n) + "}")
    .matches(in: s, range: NSRange(s.startIndex..., in: s))
    .map{ String(s[Range($0.range, in: s)!]) }.joined(separator: "-"))