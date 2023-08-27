for _ in 1...6 {
    let b = Int(readLine()!)!
    print (b % 3 == 0 ? "Pop" : b % 2 == 0 ? "Crackle" : "Snap", terminator: " ")
}