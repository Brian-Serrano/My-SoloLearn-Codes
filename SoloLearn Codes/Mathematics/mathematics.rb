n = gets.chomp.to_i
s = gets.chomp.split(" ")

r = "none"
for i in (0..s.length - 1) do
    if n == eval(s[i])
        r = "index #{i}"
        break
    end
end

puts(r)