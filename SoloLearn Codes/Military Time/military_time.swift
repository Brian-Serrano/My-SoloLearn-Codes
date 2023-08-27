import Foundation

let t = readLine()!
var date = Date()
let format = DateFormatter()
format.dateFormat = "h:mm a"
date = format.date(from: t)!
format.dateFormat = "HH:mm"
print(format.string(from: date))