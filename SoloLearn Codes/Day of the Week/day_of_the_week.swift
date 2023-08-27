import Foundation

let s = readLine()!
var dtFmtG = DateFormatter()
let dtFmtP = DateFormatter()
dtFmtP.dateFormat = "EEEE"
let ch = Array(s.lowercased())[0] as Character
dtFmtG.dateFormat = ch >= "a" && ch <= "z" ? "MMMM dd, yyyy" : "MM/dd/yyyy"
let date = dtFmtG.date(from: s)
print(dtFmtP.string(from: date!))