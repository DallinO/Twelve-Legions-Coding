# Linear Search
### Overview
Linear search is one of the simplest searching algorithms. It sequentially checks each element of the list until a match is found or the entire list has been searched.

#### Steps
1. Start from the first element of the list.
2. Compare the target element with each element of the list sequentially.
3. If the target element is found, return its index.
4. If the end of the list is reached without finding the target element, return -1 to indicate that the element is not present in the list.

#### Time Complexity
In the worst-case scenario, linear search has a time complexity of O(n), where n is the number of elements in the list. This means that the time taken to search for an element in the list increases linearly with the size of the list.

#### When To Use
Linear search is suitable for small lists or when the elements are not in any specific order. It is straightforward to implement and does not require the list to be sorted. However, for large lists or when efficiency is critical, more advanced search algorithms like binary search are preferred, as they have better time complexities.

### Implementation
#### Pseudocode
Basic form:
```
FUNCTION LinearSearch(data, target)
    FOREACH element IN DATA
        IF element EQUAL target
            RETURN element
    RETURN NULL
```
Recursion form:
```
FUNCTION LinearSearch(data, target, index)
    IF index GREATEREQUAL LENGTH(data)
        RETURN -1
    
    IF index EQUAL target
        RETURN index

    RETURN LinearSearch(data, target, index + 1)
```
#### Python
Basic form:
```
def linear_search(data, target):
    for i in range(len(data)):
        if data[i] == target:
            return i
    return -1
```
Recursive form:
```
def linear_search_recursion(data, target, index):
    if index >= len(data):
        return -1
    if data[index] == target:
        return index
    return linear_search_recursion(data, target, index + 1)
```
#### C#
Basic form:
```
public static int BasicLinearSearch<T>(List<T> data, T target) where T : IComparable<T>
{
    for (int i = 0; i < data.Count; i++)
    {
        if (data[i].CompareTo(target) == 0)
        {
            return i;
        }
    }

    return -1;
}
```
Recursive form:
```
public static int RecursiveLinearSearch<T>(List<T> data, T target, int index) where T : IComparable<T>
{
    if (index >= data.Count)
        return -1;

    if (data[index].CompareTo(target) == 0)
        return index;

    return RecursiveLinearSearch(data, target, index + 1);
}
```
#### C++
Basic form:
```
```
Recursive form:
```

```