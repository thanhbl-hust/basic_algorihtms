#hard algorithms

#explain each line of code



list = [x for x in range(10, 0, -1)]

def getindex(list, low, high):

    tmp = list[high]
    i = low - 1

    for j in range(low, high):
        if list[j] <= tmp:
            i = i + 1
            list[i], list[j] = list[j], list[i]
    list[i + 1], list[high] = list[high], list[i + 1]
    return i + 1


def quickSort(list, low, high):
    if low < high:
        index = getindex(list, low, high)
        quickSort(list, low, index - 1)
        quickSort(list, index + 1, high)
    return list 

list = quickSort(list, 0, len(list) - 1)

print(list)