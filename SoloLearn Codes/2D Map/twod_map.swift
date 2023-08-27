let m = readLine()!.split(separator: ",")
var p = [(Int, Int)]()
for (i, r) in m.enumerated() {
    for (j, c) in r.enumerated() {
        if c == "P" {
            p.append((i, j))
        }
    }
}
print(abs(p[0].1 - p[1].1) + abs(p[0].0 - p[1].0))