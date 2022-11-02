#hard algorithms

#explain each line of code



list = [x for x in range(10, 0, -1)]

def getindex(list, low, high):

    i = low
    j = high - 1
    tmp = list[high]

    while i < j:
        while i < high and list[i] < tmp:
            i += 1
        while j > low and list[j] > tmp:
            j -= 1
        if i < j:
            list[i], list[j] = list[j], list[i]
    if list[i] > tmp:
        list[i], list[high] = list[high], list[i]
    return i
        


def quickSort(list, low, high):
    if low < high:
        index = getindex(list, low, high)
        quickSort(list, low, index - 1)
        quickSort(list, index + 1, high)
    return list 

list = quickSort(list, 0, len(list) - 1)

print(list)