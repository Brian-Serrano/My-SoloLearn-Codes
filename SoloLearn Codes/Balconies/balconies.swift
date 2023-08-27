func calculateArea(str: String) -> Int {
    return str.split(separator: ",").reduce(1) { $0 * Int($1)! }
}
print(calculateArea(str: readLine()!) > calculateArea(str: readLine()!) ? "Apartment A" : "Apartment B")