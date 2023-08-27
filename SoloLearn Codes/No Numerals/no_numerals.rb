arr = %w[zero one two three four five six seven eight nine ten]
puts(gets.chomp.split.map{ |w| w.match?(/[[:digit:]]/) ? arr[w.to_i] : w }.join(" "))