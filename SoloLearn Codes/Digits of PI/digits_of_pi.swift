import Foundation

var arr = (0...3501).map { x in 2000 }
var piStr = String()
var carry = 0
for i in stride(from: 3500, to: 0, by: -14) {
    var sum = 0
    for j in stride(from: i, to: 0, by: -1) {
        sum = sum * j + 10000 * arr[j]
        arr[j] = sum % (j * 2 - 1)
        sum /= j * 2 - 1
    }
    piStr += String(format: "%04d", carry + sum / 10000)
    carry = sum % 10000
}
print(Array(piStr)[Int(readLine()!)!])