def calculate_area(inputs):
    lists = inputs.split(',')
    area = 1
    for x in lists:
        area *= int(x)
    return area


print("Apartment A" if calculate_area(input()) > calculate_area(input()) else "Apartment B")
