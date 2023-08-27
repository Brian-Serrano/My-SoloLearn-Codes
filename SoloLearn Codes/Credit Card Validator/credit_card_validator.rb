s = gets.chomp.reverse
puts(s.chars.map.with_index{ |c, i| i % 2 == 1 ? c.to_i * 2 : c.to_i }.map{ |x| x > 9 ? x - 9 : x }.sum % 10 == 0 && s.length == 16 ? "valid" : "not valid")