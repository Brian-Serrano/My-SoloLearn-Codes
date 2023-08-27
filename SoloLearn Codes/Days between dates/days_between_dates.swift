import Foundation

let s1 = readLine()!
let s2 = readLine()!
var dtFmt = DateFormatter()
dtFmt.dateFormat = "MMMM dd, yyyy"
let date1 = dtFmt.date(from: s1)
let date2 = dtFmt.date(from: s2)
print(Int((date2!.timeIntervalSinceReferenceDate  - date1!.timeIntervalSinceReferenceDate) / TimeInterval(60 * 60 * 24)))