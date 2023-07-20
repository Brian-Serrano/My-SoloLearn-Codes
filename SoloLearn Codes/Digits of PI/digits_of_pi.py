try:
    from sympy.mpmath import mp
except ImportError:
    from mpmath import mp

mp.dps = int(input() or 0) + 2
print(str(mp.pi)[-2])
