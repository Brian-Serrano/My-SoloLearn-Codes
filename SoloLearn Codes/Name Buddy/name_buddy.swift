import Foundation

let g = readLine()!.split(separator: " ") 
let n = readLine()!
print (g.contains{ $0.first! == n.first! } ? "Compare notes" : "No such luck")