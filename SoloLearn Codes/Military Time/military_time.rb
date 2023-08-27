require 'time' 

puts((Time.strptime(gets.chomp, "%I:%M %p").to_s.split(/[:\s]/)[1,2]).join(':'))