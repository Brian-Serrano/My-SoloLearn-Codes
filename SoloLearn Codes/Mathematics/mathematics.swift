import Foundation

let target = Int(readLine()!)!
let input = readLine()!
var idx = "none"
let expressions = try NSRegularExpression(pattern: "\\(([^()]+)\\)")
	.matches(in: input, range: NSRange(input.startIndex..., in: input))
	.map{ String(input[Range($0.range, in: input)!]) }
let tokens = try expressions.map{ x in
	return try NSRegularExpression(pattern: "([0-9]+)|([+\\-*/])")
		.matches(in: x, range: NSRange(x.startIndex..., in: x))
		.map{ String(x[Range($0.range, in: x)!]) }
}
for i in 0..<tokens.count {
	var count = Int(tokens[i][0])!
	for j in stride(from: 1, through: tokens[i].count - 1, by: 2) {
		let num = Int(tokens[i][j + 1])!
		let op = tokens[i][j]
		switch op {
			case "+":
				count += num
				break
			case "-":
				count -= num
				break
			case "*":
				count *= num
				break
			case "/":
				count /= num
				break
			default:
				count += 0
		}
	}
	if count == target {
		idx = "index \(i)"
		break
	}
}
print(idx)