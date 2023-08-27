$t = Array.new(10000, 0)
def q(n)
    if n > 2
        if $t[n] == 0
            $t[n] = q(n - q(n - 1)) + q(n - q(n - 2))
        end	  
        return $t[n]
    else
        return 1
    end	  
end

puts(q(gets.chomp.to_i))