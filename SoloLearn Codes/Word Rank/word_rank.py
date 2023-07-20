def find_common_fact(k, b):
    abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    result = 1
    a = k[b:]
    common = []
    for i in range(len(abc)):
        count = a.count(abc[i])
        if count > 1:
            common.append(count)
    for i in range(len(common)):
        result *= fact(common[i])
    return result


def fact(n):
    if n <= 1:
        return 1
    else:
        return fact(n - 1) * n


input_str = input()
arr = list(input_str)
sorted_arr = sorted(arr)

sum = 0
fac = [0] * len(arr)
for i in range(len(arr)):
    for j in range(len(sorted_arr)):
        if arr[i] == sorted_arr[j]:
            fac[i] = j
            sorted_arr.pop(j)
            break
    sum += fac[i] * fact(len(arr) - 1 - i) / find_common_fact(input_str, i)
sum += 1
print(int(sum))
