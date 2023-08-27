import re


print('Strong' if re.match("((?=.*[!@#$%&*])(?=.*[0-9]).{7,})", input()) else 'Weak')
