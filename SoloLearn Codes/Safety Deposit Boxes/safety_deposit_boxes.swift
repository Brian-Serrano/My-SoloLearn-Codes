import Foundation

let items = readLine()!.components(separatedBy: ",") 
let found = readLine()!
print((items.firstIndex(of: found)! + 1) * 5)