print(readLine()!.split(separator: " ").map{ "\($0.dropFirst())\($0.first!)ay" }.joined(separator: " "))