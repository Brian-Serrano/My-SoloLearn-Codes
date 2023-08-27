var digit = readLine()!.reversed().map { Int(String($0))! }
for i in stride(from: 1, through: digit.count - 1, by: 2) {
    digit[i] *= 2
    if digit[i] > 9 {
        digit[i] -= 9
    }
}
print(digit.reduce(0, +) % 10 == 0 && digit.count == 16 ? "valid" : "not valid")