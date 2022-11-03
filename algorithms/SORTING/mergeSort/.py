list = [x for x in range(10, 0, -1)]

def mergeSort(list):

    length = len(list)
    if length == 1:
        return list 
    mid = length // 2 #take round number: using //
    left = list[:mid]
    right = list[mid:]
    mergeSort(left)
    mergeSort(right)
    i = 0
    j = 0
    k = 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            list[k] = left[i]
            i += 1
        else:
            list[k] = right[j]
            j += 1
        k += 1
    while i < len(left):
        list[k] = left[i]
        i += 1
        k += 1
    while j < len(right):
        list[k] = right[j]
        j += 1
        k += 1
    return list
list = mergeSort(list)
print(list)