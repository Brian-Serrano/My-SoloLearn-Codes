import datetime as dt

inp = input()

if not inp[0].isalpha():
    d = [int(p) for p in inp.split('/')]
    print(dt.datetime(d[2], d[0], d[1]).strftime("%A"))
else:
    d = inp.split(',')
    dd = d[0].split(' ')
    m = dt.datetime.strptime(dd[0], '%B').month
    print(dt.datetime(int(d[1]), m, int(dd[1])).strftime("%A"))
