c = gets.chomp.to_i
b = gets.chomp.to_i
k = c % b
puts(k >= 7 ? "Cake Time" : "I need to buy #{ 7 - k } more")