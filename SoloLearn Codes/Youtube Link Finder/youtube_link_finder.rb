u = gets.chomp
puts(u.split('=')[1] != nil ? u.split('=')[1] : u.split('/')[-1])