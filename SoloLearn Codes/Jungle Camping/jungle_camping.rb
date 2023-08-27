hash = { "Grr"=> "Lion", "Rawr"=> "Tiger", "Ssss"=> "Snake", "Chirp"=> "Bird" }
puts(gets.chomp.split.map{ |x| hash[x] }.join(" "))