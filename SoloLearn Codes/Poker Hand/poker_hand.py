s = input()

s = s.replace("2", "02").replace("3", "03").replace("4", "04").replace("5", "05")
s = s.replace("6", "06").replace("7", "07").replace("8", "08").replace("9", "09")
s = s.replace("J", "11").replace("Q", "12").replace("K", "13").replace("A", "14")

vs = ['02', '03', '04', '05', '06', '07', '08', '09', '10', '11', '12', '13', '14']
hV = []
for v in vs:
    nV = len(s) - len(s.replace(v, ""))
    if nV != 0:
        hV.append(int(nV / 2))

suits = ['H', 'S', 'C', 'D']
suited = False
for su in suits:
    nSu = len(s) - len(s.replace(su, ""))
    if nSu == 5:
        suited = True
        break

wos = s.replace("H", "").replace("C", "").replace("S", "").replace("D", "")
wosLst = list(map(int, wos.split()))

sm = sum(wosLst)
mn = min(wosLst)
mx = max(wosLst)
ln = len(hV)

if 2 in hV and ln == 4:
    print("One Pair")
elif 2 in hV and ln == 3:
    print("Two Pairs")
elif 3 in hV and ln == 3:
    print("Three of a Kind")
elif 3 in hV and ln == 2:
    print("Full House")
elif 4 in hV and ln == 2:
    print("Four of a Kind")
elif suited and mx - mn == 4 and mx == 14 and ln == 5:
    print("Royal Flush")
elif suited and mx - mn == 4 and ln == 5:
    print("Straight Flush")
elif suited and mx - mn == 12 and mx == 14 and sm == 28 and ln == 5:
    print("Straight Flush")
elif mx - mn == 12 and mx == 14 and sm == 28 and ln == 5:
    print("Straight")
elif mx - mn == 4 and ln == 5:
    print("Straight")
elif suited:
    print("Flush")
elif not 2 in hV and not 3 in hV and not 4 in hV and mx - mn != 4:
    print("High Card")
