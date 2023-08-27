let word = Array(readLine()!)
var r = 1
var spc = 1
var cc = [Character : Int]()
for i in stride(from: word.count - 1, through: 0, by: -1) {
    let c = word[i]
    let xc = (cc[c] ?? 0) + 1
    cc[c] = xc
    for (k, v) in cc {
        if k < c {
            r += spc * v / xc
        }
    }
    spc *= word.count - i
    spc /= xc
}
print(r)