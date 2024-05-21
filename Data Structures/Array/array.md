# ARRAY
An array is a data structure that consists of a collection of elements, each identified by an index or key, stored in contiguous memory locations. Arrays are designed to store multiple items of the same data type and allow efficient, constant-time access to any element via its index.
##### *Contiguous Memory Allocation*
Elements are stored in sequential, adjacent memory locations.
This enables efficient indexing and quick access to elements using their index positions.
##### *Fixed Size*
The size of an array is typically specified at the time of its creation and remains constant throughout its lifetime. (Dynamic arrays or resizable arrays can adjust their size, but traditional arrays are fixed in size.)
##### *Homogeneous Elements*
All elements in an array must be of the same data type. This ensures that each element occupies the same amount of memory, allowing for predictable memory layout.
##### *Indexed Access*
Each element in an array can be accessed directly using its index, which is usually zero-based (the first element has an index of 0).

The index is used to calculate the memory address of the desired element based on the starting address of the array and the size of each element.

### *Memory Layout*
When we talk about sequential adjacent memory in the context of arrays, we are referring to how elements of the array are stored in a computer's memory. Physically, this means that each element of the array is placed right next to the previous one in a continuous block of memory addresses. This allows for efficient access and management of the data.

Consider an array of integers declared in C as `int arr[5];`. Suppose each integer takes 4 bytes of memory. If the starting address of the array is 1000 (this is a hypothetical address for illustration purposes), the memory layout would look like this:
```
Memory Address  |  Value
----------------|--------
1000            |  arr[0]
1004            |  arr[1]
1008            |  arr[2]
1012            |  arr[3]
1016            |  arr[4]
```
### *Physical Representation in Memory*
Each memory address corresponds to a unique location in the computer's RAM (Random Access Memory). For an array of 5 integers:

**Starting Address**: If `arr[0]` is at address 1000, it occupies bytes 1000, 1001, 1002, and 1003.

**Next Element**: `arr[1]` starts immediately after arr[0] at address 1004, occupying bytes 1004, 1005, 1006, and 1007.

**Subsequent Elements**: This pattern continues with each subsequent element placed right after the previous one.

### *Efficient Access*
This contiguous allocation allows the CPU to calculate the address of any element using a simple formula:
```
address_of_arr[i] = base_address + i × size_of_each_element
```
For instance, to access arr[2]:
```
address_of_arr[2] = 1000 + 2 × 4 = 1008
```

### *Advantages of Contiguous Memory Allocation*

**Constant Time Access**: Any element can be accessed in constant time, O(1)O(1), because the address calculation is straightforward.

**Cache Friendliness**: Contiguous memory layouts are cache-friendly, leading to better performance due to spatial locality (accessing elements that are close in memory is faster).

**Simplified Iteration**: Iterating through the array is straightforward, as you can simply move from one memory address to the next in a loop.