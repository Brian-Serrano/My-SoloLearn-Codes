let vs = readLine()!.split(separator: ",").map { Double($0)! }
print(Int(((vs.reduce(0, +) - vs.max()!) * 1.07) * 0.3))