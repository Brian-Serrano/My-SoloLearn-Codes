from datetime import datetime

t = input()
mt = datetime.strptime(t, "%I:%M %p")
print(f"{mt.hour:02}:{mt.minute:02}")
