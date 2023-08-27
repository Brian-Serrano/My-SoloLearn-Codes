s = gets.chomp
puts((s.delete(' ?').length / s.split.length.to_f).ceil)