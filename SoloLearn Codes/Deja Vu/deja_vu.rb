s = gets.chomp
puts(s.length == s.chars.uniq.length ? "Unique" : "Deja Vu")