import Foundation

let s = readLine()!
print(try NSRegularExpression(pattern: "[^a-zA-Z0-9\\s]")
    .stringByReplacingMatches(in: s, options: [], range: NSMakeRange(0, s.count), withTemplate: ""))
