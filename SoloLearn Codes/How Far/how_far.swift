import Foundation

let s = Array(readLine()!)
print(abs(s.firstIndex(of: "H")! - s.firstIndex(of: "P")!) - 1)