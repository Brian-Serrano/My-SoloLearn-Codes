str = gets.chomp.gsub("x", "")
puts((str.include?("$T") || str.include?("T$")) ? "ALARM" : "quiet")