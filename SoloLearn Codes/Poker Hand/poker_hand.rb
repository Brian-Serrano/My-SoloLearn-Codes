rankVal = { "2"=> 2, "3"=> 3, "4"=> 4, "5"=> 5, "6"=> 6, "7"=> 7, "8"=> 8, "9"=> 9, "10"=> 10, "J"=> 11, "Q"=> 12, "K"=> 13, "A"=> 14 }
hand = gets.chomp.split
rank = hand.map{ |c| rankVal[c[0..-2]] }.sort.reverse
freq = rank.map{ |c| rank.count(c) }
suitFreq = hand.map{ |c| c[-1] }.uniq.length == 1
rankOrd = (1..4).all?{ |c| rank[c] + 1 == rank[c - 1] }

if suitFreq && rankOrd && rank[0] == 14
    puts("Royal Flush")
elsif suitFreq && rankOrd
    puts("Straight Flush")
elsif freq[0] == 4 || freq[4] == 4
    puts("Four of a Kind")
elsif [2, 3].sort == [freq[0], freq[4]].sort
    puts("Full House")
elsif suitFreq
    puts("Flush")
elsif rankOrd
    puts("Straight")
elsif freq[2] == 3
    puts("Three of a Kind")
elsif freq[1] == 2 && freq[3] == 2
    puts("Two Pairs")
elsif rank.uniq.select{ |c| rank.count(c) == 2 }.length == 1
    puts("One Pair")
else
    puts("High Card")
end