import Foundation

let str = readLine()!
print(try NSRegularExpression(pattern: "((?=.*[!@#$%&*])(?=.*[0-9]).{7,})")
    .matches(in: str, range: NSRange(location: 0, length: (str as NSString).length))
    .isEmpty ? "Weak" : "Strong")