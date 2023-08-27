var ns = readLine()!.split(separator: " ")
for n in ns {
    switch n {
        case "Grr":
            print("Lion", terminator: " ")
        case "Rawr":
            print("Tiger", terminator: " ")
        case "Ssss":
            print("Snake", terminator: " ")
        case "Chirp":
            print("Bird", terminator: " ")
        default:
            break
    }
}