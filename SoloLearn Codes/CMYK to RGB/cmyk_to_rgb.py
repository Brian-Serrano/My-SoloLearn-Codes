CMYK = [float(input()) for i in range(4)]
RGB = [255 * (1 - CMYK[i]) * (1 - CMYK[3]) for i in range(3)]
print(','.join(map(lambda a: str(round(a)), RGB)))
