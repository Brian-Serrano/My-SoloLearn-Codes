let rankValues = ["2": 2, "3": 3, "4": 4, "5": 5, "6": 6, "7": 7, "8": 8, "9": 9, "10": 10, "J": 11, "Q": 12, "K": 13, "A": 14]
let hand = readLine()!.split(separator: " ")
let rank = hand.map{ s in rankValues["\(s[..<(s.index(s.endIndex, offsetBy: -1))])"]! }.sorted(by: >)
let counter = rank.reduce(into: [:]) { counts, word in counts[word, default: 0] += 1 }
let frequency = rank.map{ counter[$0]! }
let suitFrequency = Set(hand.map{ $0.last! }).count == 1
let rankOrder = (1..<5).allSatisfy{ idx in rank[idx] + 1 == rank[idx - 1] }
if suitFrequency && rankOrder && rank[0] == 14 {
    print("Royal Flush")
}
else if suitFrequency && rankOrder {
    print("Straight Flush")
}
else if frequency[0] == 4 || frequency[4] == 4 {
    print("Four of a Kind")
}
else if [2, 3].sorted() == [frequency[0], frequency[4]].sorted() {
    print("Full House")
}
else if suitFrequency {
    print("Flush")
}
else if rankOrder {
    print("Straight")
}
else if frequency[2] == 3 {
    print("Three of a Kind")
}
else if frequency[1] == 2 && frequency[3] == 2 {
    print("Two Pairs")
}
else if counter.filter({ $1 == 2 }).count == 1 {
    print("One Pair")
}
else {
    print("High Card")
}