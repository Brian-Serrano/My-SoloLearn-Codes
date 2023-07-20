zip_code = input()
print("true" if zip_code.isdigit() and len(zip_code) == 5 and not zip_code.isspace() else "false")
