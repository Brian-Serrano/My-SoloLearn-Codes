CMYK = (0..3).map{ |x| gets.chomp.to_f }
RGB = (0..2).map{ |x| 255 * (1 - CMYK[x]) * (1 - CMYK[3]) }
puts(RGB.map{ |x| x.round(0) }.join(','))