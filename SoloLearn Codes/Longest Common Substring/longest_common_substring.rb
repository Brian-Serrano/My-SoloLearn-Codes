ws = gets.chomp.split
fw = ws[0]
lcs = fw[0]
for i in (0..fw.length - 1) do
    for j in (i + 1..fw.length - 1) do
        ss = fw[i..j]
        if ws.select{ |w| w.include?(ss) }.length == ws.length && ss.length > lcs.length
            lcs = ss
        end
    end
end

puts(lcs)