s = gets.chomp.downcase.split(" ") 
puts((0..s.length - 2).none?{ |i| s[i][-1] != s[i + 1][0] })