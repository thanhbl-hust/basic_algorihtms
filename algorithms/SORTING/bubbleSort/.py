list = [x for x in range(10, 0, -1)]

def bubbleSort(list):
    length = len(list)

    for i in range(length - 1):
        for j in range(length - 1 - i):
            if list[j] > list[j + 1]:
                list[j], list[j + 1] = list[j + 1], list[j]

    return list 
list = bubbleSort(list)
print(list)