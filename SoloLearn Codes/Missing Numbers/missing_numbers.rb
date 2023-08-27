n = gets.chomp.to_i
ns = (1..n).map{ |a| gets.chomp.to_i }
puts((ns.min..ns.max).select{ |a| !ns.include?(a) }.join(" "))