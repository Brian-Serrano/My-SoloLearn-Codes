d = gets.chomp.to_i
r = gets.chomp.to_i
c = gets.chomp.to_i
puts((d / r < (d + 50) / c) ? "Meep Meep" : "Yum")