def IterativeBinarySearch(data, target):
    begin = 0
    end = len(data) - 1

    while begin <= end:
        pivot = (begin + end) // 2

        if data[pivot] == target:
            return pivot
        if target < data[pivot]:
            end = pivot - 1
        elif target > data[pivot]:
            begin = pivot + 1

    return -1

def RecursiveBinarySearch(data, target, begin, end):
    pivot = (begin + end) // 2

    if begin > end:
        return -1

    if data[pivot] == target:
        return pivot
    elif target < data[pivot]:
        return RecursiveBinarySearch(data, target, begin, pivot - 1)
    else:
        return RecursiveBinarySearch(data, target, pivot + 1, end)