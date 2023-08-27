import Foundation

var ws = readLine()!.split(separator: " ")
var fw = ws[0]
var lcs = String(Array(fw)[0])

for i in 0..<fw.count {
    for j in (i + 2)..<(fw.count + 1) {
        let sub = String(Array(fw)[i..<j])
        if ws.filter({ $0.range(of: sub) != nil }).count == ws.count {
            if sub.count > lcs.count {
                lcs = sub
            }
        }
    }
}

print(lcs)