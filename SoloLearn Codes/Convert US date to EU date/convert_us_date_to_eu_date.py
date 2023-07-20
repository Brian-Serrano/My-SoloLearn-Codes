from datetime import datetime

t = input()
mt = datetime.strptime(t, "%B %d, %Y") if t[0].isalpha() else datetime.strptime(t, "%m/%d/%Y")
print(f"{mt.day}/{mt.month}/{mt.year:04}")
