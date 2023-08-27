g = gets.chomp.split
n = gets.chomp
puts(g.any?{ |x| x[0] == n[0] } ? "Compare notes" : "No such luck")