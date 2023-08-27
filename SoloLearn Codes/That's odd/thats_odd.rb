n = gets.chomp.to_i
puts((1..n).map{ |x| gets.chomp.to_i }.select{ |x| x % 2 == 0 }.sum)