let num = Int(readLine()!)!
let nums = (1...num).map{ x in Int(readLine()!)! }
print((0..<num).allSatisfy{ x in (0..<x).map{ nums[$0] }.reduce(0, +) < nums[x] })