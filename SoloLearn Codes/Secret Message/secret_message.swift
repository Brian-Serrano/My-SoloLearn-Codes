print(String(readLine()!.lowercased().map{ c in 
if c >= "a" && c <= "z" {
    let a = c.unicodeScalars.first?.value ?? 0
    return Character(UnicodeScalar((25 - (a - 97)) + 97)!)
}
else {
    return c
}}))