s = gets.chomp
r = 1
spc = 1
cc = {}
(s.length - 1).downto(0) do |i|
    x = s[i]
    xc = (cc[x] || 0) + 1
    cc.store(x, xc)
    cc.each { |k, v| r += spc * v / xc if k < x }
    spc *= s.length - i
    spc /= xc
end
puts(r)