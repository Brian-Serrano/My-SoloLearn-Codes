import Foundation

let s = String(readLine()!.reversed())
print(try NSRegularExpression(pattern: "[^a-zA-Z\\s]")
    .stringByReplacingMatches(in: s, options: [], range: NSMakeRange(0, s.count), withTemplate: ""))