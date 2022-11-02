list = [x for x in range(10, 0, -1)]

def selectionSort(list):
    length = len(list)

    for i in range(len(list) - 1):
        minindex = i
        for j in range(i + 1, len(list)):
            if list[j] < list[minindex]:
                minindex = j
        if minindex != i:
            list[minindex], list[i] = list[i], list[minindex]

    return list 


list = selectionSort(list)
print(list)