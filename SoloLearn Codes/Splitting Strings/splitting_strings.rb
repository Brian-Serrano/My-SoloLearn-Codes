s = gets.chomp
n = gets.chomp.to_i
puts(s.scan(/.{1,#{n}}/).join("-"))