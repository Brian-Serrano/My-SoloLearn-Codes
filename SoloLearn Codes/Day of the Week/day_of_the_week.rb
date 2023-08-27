require 'date'

t = gets.chomp
puts(Date.strptime(t, t[0].match?(/[0-9]/) ? "%m/%d/%Y" : "%B %d, %Y").strftime("%A"))