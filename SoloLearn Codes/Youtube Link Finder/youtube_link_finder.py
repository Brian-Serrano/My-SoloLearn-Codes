link = input()
try:
    print(link.split("=")[1])
except:
    print(link.split("/")[-1])
