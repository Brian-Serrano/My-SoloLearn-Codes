let c = Int(readLine()!)!
let b = Int(readLine()!)!
let k = c % b
print (k >= 7 ? "Cake Time" : "I need to buy \(7-k) more")