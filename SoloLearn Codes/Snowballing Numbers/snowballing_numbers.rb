n = gets.chomp.to_i
lst = (1..n).map{ |x| gets.chomp.to_i }
puts((0..n - 1).all?{ |x| (0..x - 1).map{ |y| lst[y] }.sum < lst[x] })