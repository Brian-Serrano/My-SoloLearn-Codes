s = gets.chomp.chars
(0..s.length - 1).step(2) { |i| print(s[i] * s[i + 1].to_i) }