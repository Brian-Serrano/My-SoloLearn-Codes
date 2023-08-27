h = gets.chomp.to_i
w = gets.chomp.to_i
puts(((h * w * 2) * 12 / (60 * 2).to_f).ceil())