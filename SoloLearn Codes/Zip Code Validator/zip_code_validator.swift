import Foundation

let z = readLine()!
print(!(try NSRegularExpression(pattern: "^\\d{5}$")
    .matches(in: z, range: NSRange(location: 0, length: (z as NSString).length))
    .isEmpty))