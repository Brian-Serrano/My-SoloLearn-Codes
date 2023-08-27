area = -> (str) { str.split(',').map{ |x| x.to_i }.inject(:*) }
print(area.call(gets.chomp) > area.call(gets.chomp) ? "Apartment A" : "Apartment B")