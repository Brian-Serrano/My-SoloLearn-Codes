for i in 1..6 do
    b = gets.chomp.to_i
    print(b % 3 == 0 ? "Pop " : b % 2 == 0 ? "Crackle " : "Snap ")
end