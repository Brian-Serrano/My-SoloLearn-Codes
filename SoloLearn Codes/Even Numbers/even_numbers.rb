puts(gets.chomp.split(" ").select{ |a| a.to_i % 2 == 0 }.join(" "))