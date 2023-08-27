let u = readLine()!
print(u.firstIndex(of: "=") != nil ? u[u.index(after: u.firstIndex(of: "=")!)...] : u[u.index(after: u.lastIndex(of: "/")!)...])