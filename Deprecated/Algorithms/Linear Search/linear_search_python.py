def linear_search(data, target):
    for i in range(len(data)):
        if data[i] == target:
            return i
    return -1

def linear_search_recursion(data, target, index):
    if index >= len(data):
        return -1
    if data[index] == target:
        return index
    return linear_search_recursion(data, target, index + 1)


def test_cases():
    
    int_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
    assert linear_search(int_list, 5) == 4
    assert linear_search_recursion(int_list, 5, 0) == 4

def main():
    test_cases()

if __name__ == "__main__":
    main()