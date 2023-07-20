import datetime as dt

dtF = input()
dtS = input()
print((dt.datetime.strptime(dtS, "%B %d, %Y") - dt.datetime.strptime(dtF, "%B %d, %Y")).days)
