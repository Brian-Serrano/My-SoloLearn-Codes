a = gets.chomp.split(",").map{ |v| v.to_f }
t = a.inject(0.0) { |a, c| a + c.floor }
puts((((t - a.max) * 1.07) * 0.3).floor)