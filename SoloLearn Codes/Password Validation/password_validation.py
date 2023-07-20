sp = ['!', '@', '#', '$', '%', '&', '*']
np = list(map(str, range(0, 10)))


def pc(pw, lst):
    return len(list(filter(lambda c: c in lst, pw)))


inp = input()
print('Strong' if pc(inp, sp) >= 2 and pc(inp, np) >= 2 and len(inp) >= 7 else 'Weak')
