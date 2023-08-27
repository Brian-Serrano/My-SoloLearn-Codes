var t = [Int] (repeating: 0, count: 10000)

func q(n: Int) -> Int {
    if n > 2 {
        if t[n] == 0 {
            t[n] = q(n: n - q(n: n - 1)) + q(n: n - q(n: n - 2))
        }      
        return t[n]
    } else {
        return 1
    }
}

let x = Int(readLine()!)!
print(q(n: x))