import Foundation

let k = Int(readLine()!)!
let cost = k * 5
let tax = Double(cost) * 0.07
let discount = (Double(cost) + tax) * 0.1
let price = Double(cost)  + tax - (k > 1 ? discount : 0)
print(ceil(price * 100.0) / 100.0)