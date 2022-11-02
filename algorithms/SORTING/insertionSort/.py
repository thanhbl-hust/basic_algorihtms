list = [x for x in range(10, 0, -1)]

def insertionSort(list):

    length = len(list)
    for i in range(1, length):
        key = list[i]
        j = i - 1
        while j >= 0 and list[j] > key:
            list[j + 1] = list[j]
            j -= 1
        list[j + 1] = key
    return list

list = insertionSort(list)

print(list)