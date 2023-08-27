var CMYK = (0...3).map { x in Float(readLine()!)! }
var RGB = (0...2).map { x in 255 * (1 - CMYK[x]) * (1 - CMYK[3]) }
print(RGB.map { String(Int($0.rounded())) }.joined(separator:","))