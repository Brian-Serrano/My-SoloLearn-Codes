puts(gets.chomp.chars.map{ |a| a.upcase == a ? "_" + a.downcase : a }.join.delete_prefix("_"))