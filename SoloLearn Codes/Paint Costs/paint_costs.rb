p = gets.chomp.to_i * 5
tax = (40 + p) * 0.10
puts((40 + p + tax).ceil())