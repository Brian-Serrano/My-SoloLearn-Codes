require 'date'

s1 = gets.chomp
s2 = gets.chomp
puts((Date.strptime(s2, '%B %d, %Y') - Date.strptime(s1, '%B %d, %Y')).to_i)