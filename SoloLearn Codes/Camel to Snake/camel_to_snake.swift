print(readLine()!
    .map { x in
        let char = String(x)
        return char.uppercased() == char ? "_" + char.lowercased() : char
    }.joined(separator: "")
    .drop { $0 == "_" })
