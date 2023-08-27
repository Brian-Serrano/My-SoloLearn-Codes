let arr = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"];
print(readLine()!.split(separator: " ")
    .map{ t in t.prefix(while: { "0"..."9" ~= $0 }) == "" ? String(t) : arr[Int(t)!] }
    .joined(separator: " "))