require 'date'

t = gets.chomp
ts = Date.strptime(t, t[0].match?(/[0-9]/) ? "%m/%d/%Y" : "%B %d, %Y")
puts("%d/%d/%04d" % [ts.day, ts.month, ts.year])