text = input()
print('Unique' if len(text) == len(set(text)) else 'Deja Vu')
