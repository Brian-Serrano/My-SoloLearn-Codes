hash = { "Mango"=> 9, "Carrot"=> 4, "Lettuce"=> 5, "Cheeseburger"=> 0 }
puts(gets.chomp.split(" ").map{ |x| hash[x] || 0 }.sum >= 10 ? "Come on Down!" : "Time to wait")