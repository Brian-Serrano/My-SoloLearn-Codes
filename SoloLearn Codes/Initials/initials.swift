var n = Int(readLine()!)!
var i = (1...n).map{ x in readLine()!.split(separator: " ") }
print(i.map{ "\($0[0].first!)\($0[1].first!)" }.joined(separator: " "))