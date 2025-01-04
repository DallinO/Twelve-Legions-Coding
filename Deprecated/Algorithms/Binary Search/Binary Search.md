# Binary Search
### Overview
Binary search is a fundamental algorithm used to efficiently find a target value within a sorted array or list. It works by repeatedly dividing the search interval in half.
#### Steps
1. Binary search requires the data to be sorted in ascending order. 
2. Calculate the middle index of the range.
3. Access the element at the middle index and compare with the target value.
    - If the middle element is equal to the target value, the search is successful, and the index of the middle element is returned.
    - If the middle element is greater than the target value, the search is narrowed to the lower half of the array, excluding the middle element.
    - If the middle element is less than the target value, the search is narrowed to the upper half of the array, excluding the middle element.
4. Repeat steps 2 and 3 until the target value is found or the search range is empty (indicating that the target value is not in the array).
5. Retirn the result
    - If the target value is found, return its index.
    - If the search range is empty, return a special value (such as -1) to indicate that the target value is not present in the array.

#### Time Complexity
Binary search has a time complexity of O(log n), where n is the number of elements in the array. This means that it can efficiently search very large arrays in logarithmic time, making it much faster than linear search for sorted data. However, it requires the data to be sorted beforehand, which might add an overhead if sorting is not already a part of the process.

#### When To Use
Binary search should be used when you have a sorted collection (array, list, etc.) and you need to efficiently find elements within that collection. Here are some scenarios where binary search is particularly useful:
- **Large sorted collections**: When dealing with large datasets, binary search can significantly reduce the time complexity of searching for elements compared to linear search. This is especially noticeable as the size of the collection grows, as binary search has a time complexity of O(log n) compared to O(n) for linear search.
- **Frequent search operations**: If you need to search a sorted collection multiple times, it's beneficial to invest the upfront cost of sorting the data and then using binary search for subsequent searches. Once the data is sorted, binary search provides consistent, efficient search times.
- **Real-time or performance-critical applications**: In applications where performance is crucial, such as real-time systems or high-performance computing, binary search's efficient time complexity can be a significant advantage. It allows you to quickly locate elements without sacrificing runtime performance.
- **Memory-constrained environments**: Binary search is efficient in terms of memory usage, as it only requires access to a single element at a time and does not need to store additional data structures beyond the sorted collection itself. This makes it suitable for environments with limited memory resources.
- **When you can afford the overhead of sorting**: Sorting the data before performing binary search adds an overhead, especially for large datasets. However, if you anticipate frequent search operations and the sorting can be done as a preprocessing step or if the data is already sorted, the benefits of binary search outweigh this initial cost.

### Implementation
#### Pseudocode
Basic form:
```
```
Recursive form:
```
```
#### Python
Basic form:
```
```
Recursive form:
```
```
#### C#
Basic form:
```
```
Recursive form:
```
```
#### C++
Basic form:
```
```
Recursive form:
```
```