# Vector - Dynamic Array
### Overview
A vector, also known as a dynamic array, is a data structure that stores a collection of elements of the same type in contiguous memory locations. Unlike traditional arrays in many programming languages, which have a fixed size that must be declared upfront, dynamic arrays can grow or shrink in size dynamically as needed.

Dynamic Resizing: Dynamic arrays automatically resize themselves as elements are added or removed. When the array reaches its capacity, a new larger array is allocated, and the elements from the old array are copied to the new array. This resizing process ensures that there is always enough space to accommodate new elements.

Random Access: Like traditional arrays, dynamic arrays support random access to elements. This means that you can access any element in the array directly using its index. Random access allows for efficient element retrieval and modification.

Efficient Appends and Inserts: Dynamic arrays support efficient appending and inserting of elements. Appending an element to the end of the array typically takes constant time on average, as long as the array has sufficient capacity. Inserting an element at a specific position in the array may require shifting subsequent elements to make space, but it's still relatively efficient compared to other data structures.

Contiguous Memory Allocation: Dynamic arrays allocate memory in contiguous blocks, meaning that the elements are stored sequentially in memory. This property enables efficient traversal and access to elements, as elements are stored close together.

Cache Locality: Due to their contiguous memory allocation, dynamic arrays exhibit good cache locality, which can lead to better performance, especially when iterating over elements sequentially.

Worst-Case Time Complexity: While dynamic arrays offer efficient appending, inserting, and random access, there can be situations where certain operations have a worst-case time complexity. For example, inserting an element at the beginning of the array may require shifting all other elements, resulting in a time complexity of O(n), where n is the number of elements in the array.

## Structure
A vector is represented by three variables:
- `size_t size`: This variable stores the number of elements currently stored in the vector.
- `size_t capacity`: This variable represents the current storage capacity of the vector. It indicates how many elements the vector can hold before needing to allocate more memory.
- `T* elements`: This is a pointer to the dynamically allocated array where the elements of the vector are stored.

### Construct
There are several ways that a vector should be able to be constructed:
