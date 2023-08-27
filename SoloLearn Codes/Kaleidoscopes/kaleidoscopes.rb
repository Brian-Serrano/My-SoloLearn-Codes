k = gets.chomp.to_i
cost = k * 5
tax = cost * 0.07
print(((k > 1 ? cost + tax - ((cost + tax) * 0.1) : cost + tax) * 100.0).ceil() / 100.0)