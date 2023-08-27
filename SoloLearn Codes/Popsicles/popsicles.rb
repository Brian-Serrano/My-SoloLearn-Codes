s = gets.chomp.to_i
p = gets.chomp.to_i
puts(p % s == 0 ? "give away" : "eat them yourself")