n = gets.chomp.to_i
print((1..n).map{ |x| gets.chomp.split(" ") }.map{ |x| x[0][0] + x[1][0] }.join(" "))