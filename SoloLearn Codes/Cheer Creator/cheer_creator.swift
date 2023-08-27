let x = Int(readLine()!)!
if(x < 1) {
    print("shh");
}
else if(x > 10) {
    print("High Five");
}
else {
    print(String(repeating: "Ra!", count: x));
}