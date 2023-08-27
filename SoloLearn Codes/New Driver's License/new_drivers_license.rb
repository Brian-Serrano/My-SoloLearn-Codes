n = gets.chomp
a = gets.chomp.to_i
o = gets.chomp.split
pos = o.select{ |x| x < n }.size
puts(20 * (1 + pos / a))