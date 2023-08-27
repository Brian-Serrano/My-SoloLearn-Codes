hash = { "Nachos"=> 6, "Pizza"=> 6, "Cheeseburger"=> 10, "Water"=> 4, "Coke"=> 5 }
cost = gets.chomp.split(" ").map{ |c| hash.key?(c) ? hash[c] : hash["Coke"] }.sum
print cost + cost * 0.07