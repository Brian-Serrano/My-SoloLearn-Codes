n = gets.chomp.to_i
puts(gets.chomp.split(" ").all?{ |a| n % a.to_i == 0 } ? "divisible by all" : "not divisible by all")