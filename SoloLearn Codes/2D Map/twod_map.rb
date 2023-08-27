points = gets.chomp.split(',')
point = []
for i in 0..points.length - 1 do
    for j in 0..points.length - 1 do
        point << [i, j] if points[i][j] == "P"
    end
end
puts((point[0][1] - point[1][1]).abs + (point[0][0] - point[1][0]).abs)