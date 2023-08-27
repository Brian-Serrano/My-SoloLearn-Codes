from datetime import datetime
import calendar

t = input()
wd = datetime.strptime(t, "%B %d, %Y" if t[0].isalpha() else "%m/%d/%Y").weekday()
print(calendar.day_name[wd])
