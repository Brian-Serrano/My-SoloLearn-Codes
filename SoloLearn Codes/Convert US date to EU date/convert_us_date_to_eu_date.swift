import Foundation

var text = readLine()!
var dateFormat = DateFormatter()
dateFormat.dateFormat = Int(String(text[text.startIndex])) != nil ? "M/d/yyyy" : "MMMM d, yyyy"
var date = dateFormat.date(from: text)!
dateFormat.dateFormat = "d/M/yyyy"
print(dateFormat.string(from: date))