import re

zip_code = input()
print("true" if re.match("^\\d{5}$", zip_code) else "false")
