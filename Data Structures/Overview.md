# Data Structures Overview

## Array

An **Array** is a fundamental data structure consisting of a collection of elements, each identified by an index or key. Elements in an array are stored in contiguous memory locations, allowing for efficient access and manipulation. Arrays can be of fixed size (**static arrays**) or dynamic in nature, adjusting their size as needed.

### Benefits
- **Constant-Time Access**: Provides constant-time access to elements using their index positions.
- **Efficient Iteration**: Enables efficient iteration and traversal due to contiguous memory allocation.
- **Predictable Storage**: Simplifies memory management with predictable storage patterns.
- **Foundation for Other Structures**: Facilitates easy implementation of other data structures like stacks, queues, and hash tables.
- **Intuitive Syntax**: Offers straightforward and intuitive syntax for accessing and modifying elements.

### Fields
- **Elements**: Each item stored in the array, accessible via an index.
- **Size**: The total number of elements the array can hold, which can be fixed or dynamic depending on the array type.

### Operations
- **Access**: Retrieve or modify an element at a specific index.
- **Traversal**: Iterate through all elements in the array.
- **Insertion/Deletion**: Add or remove elements, which may require shifting elements in the case of fixed-size arrays.

### When to Use
- When you need fast, random access to elements using indices.
- In scenarios where the number of elements is known in advance and does not change frequently.
- When implementing other data structures that rely on indexed storage, such as heaps, hash tables, or matrices.
- If memory layout and cache performance are critical for the application's efficiency.
- When performing operations that require sequential access and iteration over elements.

## Dynamic List (Vector)

A **Dynamic List** is a flexible data structure built on top of arrays that can automatically resize itself to accommodate varying numbers of elements. Unlike fixed-size arrays, dynamic lists handle the complexities of memory management internally, allowing for efficient insertion, deletion, and access operations without the need for manual resizing by the programmer.

### Benefits
- **Automatic Resizing**: Eliminates the need to manually manage array capacity.
- **Efficient Random Access**: Supports efficient random access to elements using indices, similar to fixed arrays.
- **Easy Insertion/Deletion**: Facilitates easy insertion and deletion of elements with minimal overhead.
- **Optimized Memory Usage**: Dynamically adjusts the underlying array size based on the number of elements.
- **Foundation for Other Structures**: Simplifies the implementation of other complex data structures like stacks, queues, and deques.

### Data Fields
- **Elements Array**: An underlying fixed-size array that stores the actual elements of the list.
- **Size**: The current number of elements stored in the dynamic list.
- **Capacity**: The total number of elements the underlying array can hold before needing to resize.
- **Growth Factor**: Determines how much the capacity increases when the list needs to expand (commonly doubled).

### Operations
- **Add(element)**: Appends an element to the end of the list, resizing the underlying array if necessary.
- **Insert(index, element)**: Inserts an element at a specified index, shifting subsequent elements to accommodate the new entry.
- **Remove(index)**: Deletes the element at the specified index, shifting subsequent elements to fill the gap.
- **Get(index)**: Retrieves the element at the specified index in constant time.
- **Set(index, element)**: Updates the element at the specified index with a new value.
- **Size()**: Returns the current number of elements in the list.
- **Capacity()**: Returns the current capacity of the underlying array.
- **Clear()**: Removes all elements from the list, resetting its size to zero.
- **Contains(element)**: Checks whether a specific element exists within the list.
- **IndexOf(element)**: Returns the index of the first occurrence of the specified element, or -1 if not found.

### When to Use
- When you need a collection that can dynamically adjust its size to accommodate varying numbers of elements.
- In scenarios where frequent insertions and deletions are required, and manual array resizing would be cumbersome.
- When implementing other data structures (e.g., stacks, queues) that rely on dynamic storage capabilities.
- If you require efficient random access to elements combined with the flexibility of dynamic sizing.
- When memory efficiency is important, and you want the underlying array to resize automatically based on usage patterns.

## Single Linked List

A **Single Linked List** is a linear data structure where each element, called a node, contains data and a reference (or link) to the next node in the sequence. Unlike arrays, linked lists do not require contiguous memory allocation, allowing for efficient insertion and deletion of elements. The list starts with a head node and ends with a node that points to `null`, indicating the end of the list.

### Benefits
- **Efficient Insertion/Deletion**: Allows efficient insertion and deletion of elements without shifting other elements.
- **Memory Efficiency**: Utilizes memory more efficiently by allocating space only as needed for each node.
- **Dynamic Memory Management**: Simplifies dynamic memory management since the list can grow and shrink as required.
- **Avoids Resizing Overhead**: Avoids the overhead of resizing associated with dynamic arrays.
- **Flexibility for Other Structures**: Provides flexibility in implementing other complex data structures like stacks and queues.

### Data Fields
- **Node**: Each node contains two fields:
  - **Data**: Holds the value or information stored in the node.
  - **Next**: A reference to the next node in the list.
- **Head**: A reference to the first node in the linked list. If the list is empty, the head is `null`.
- **Tail (optional)**: A reference to the last node in the linked list, which can optimize certain operations like appending.
- **Size (optional)**: Keeps track of the number of nodes in the linked list, allowing for quick size retrieval.

### Operations
- **Add(element)**: Appends an element to the end of the list. If the list is empty, the new node becomes the head.
- **Insert(index, element)**: Inserts an element at a specified index, adjusting the `Next` references of adjacent nodes to include the new node.
- **Remove(index)**: Deletes the node at the specified index, updating the `Next` reference of the preceding node to skip over the removed node.
- **Get(index)**: Retrieves the element at the specified index by traversing the list from the head to that position.
- **Set(index, element)**: Updates the data of the node at the specified index with a new value.
- **Size()**: Returns the current number of elements in the list, often maintained as a separate field for efficiency.
- **Clear()**: Removes all elements from the list by setting the head (and tail, if applicable) to `null` and resetting the size.
- **Contains(element)**: Checks whether a specific element exists within the list by traversing each node and comparing values.
- **IndexOf(element)**: Returns the index of the first occurrence of the specified element, or -1 if not found.
- **IsEmpty()**: Determines whether the linked list is empty by checking if the head is `null`.

### When to Use
- When you need a dynamic data structure that can efficiently handle frequent insertions and deletions.
- In applications where memory usage needs to be optimized by allocating space only as elements are added.
- When implementing other data structures like stacks, queues, or graphs that benefit from the flexibility of linked lists.
- If you require a simple and straightforward way to manage a collection of elements without the constraints of fixed-size arrays.
- When the order of elements needs to be maintained, and traversal from the head to the tail is acceptable for operations.

## Double Linked List

A **Double Linked List** is a linear data structure where each element, called a node, contains data and two references: one to the next node and another to the previous node in the sequence. This bidirectional linking allows traversal of the list in both forward and backward directions. Unlike single linked lists, double linked lists provide more flexibility in navigation and manipulation of nodes, making certain operations more efficient.

### Benefits
- **Bidirectional Traversal**: Allows efficient bidirectional traversal, enabling movement both forwards and backwards through the list.
- **Ease of Insertion/Deletion**: Facilitates easier insertion and deletion of nodes from both ends and the middle of the list without needing to traverse from the head.
- **Performance for Certain Operations**: Provides better performance for operations such as finding the previous node, which is not possible in single linked lists.
- **Flexibility for Complex Structures**: Enhances flexibility in implementing complex data structures like deques, navigable lists, and certain types of caches.
- **Efficient Modifications**: Improves overall efficiency in scenarios where frequent modifications to the list are required from both ends.

### Data Fields
- **Node**: Each node contains three fields:
  - **Data**: Holds the value or information stored in the node.
  - **Next**: A reference to the next node in the list.
  - **Previous**: A reference to the previous node in the list.
- **Head**: A reference to the first node in the double linked list. If the list is empty, the head is `null`.
- **Tail**: A reference to the last node in the double linked list. If the list is empty, the tail is `null`.
- **Size (optional)**: Keeps track of the number of nodes in the double linked list, allowing for quick size retrieval.

### Operations
- **AddFirst(element)**: Inserts an element at the beginning of the list, updating the head and adjusting the previous reference of the old head.
- **AddLast(element)**: Appends an element to the end of the list, updating the tail and adjusting the next reference of the old tail.
- **Insert(index, element)**: Inserts an element at a specified index by traversing to the desired position and adjusting the next and previous references of adjacent nodes.
- **RemoveFirst()**: Deletes the first element of the list, updating the head to the next node and adjusting its previous reference to `null`.
- **RemoveLast()**: Deletes the last element of the list, updating the tail to the previous node and adjusting its next reference to `null`.
- **Remove(index)**: Deletes the node at the specified index by traversing to that position and adjusting the next and previous references of neighboring nodes.
- **Get(index)**: Retrieves the element at the specified index by traversing the list from the head or tail, depending on which is closer.
- **Set(index, element)**: Updates the data of the node at the specified index with a new value.
- **Size()**: Returns the current number of elements in the list, often maintained as a separate field for efficiency.
- **Clear()**: Removes all elements from the list by setting the head and tail to `null` and resetting the size.
- **Contains(element)**: Checks whether a specific element exists within the list by traversing each node and comparing values.
- **IndexOf(element)**: Returns the index of the first occurrence of the specified element, or -1 if not found.
- **IsEmpty()**: Determines whether the double linked list is empty by checking if the head is `null`.

### When to Use
- When you need a dynamic data structure that allows efficient insertion and deletion from both ends and the middle of the list.
- In scenarios requiring bidirectional traversal, enabling movement forwards and backwards through the list.
- When implementing other data structures like deques, navigable lists, or certain types of caches that benefit from flexible node manipulation.
- If frequent modifications to the list are expected, and performance in these operations is critical.
- When you require easy access to both the previous and next elements in the list without additional traversal steps.

## Tree

A **Tree** is a hierarchical data structure consisting of nodes connected by edges. It starts with a single node called the root, and each node can have zero or more child nodes, forming parent-child relationships. Trees are used to represent hierarchical relationships, such as file systems, organizational structures, and various types of sorted data structures like binary search trees.

### Benefits
- **Natural Hierarchical Representation**: Represents hierarchical relationships naturally, making it easy to model parent-child structures.
- **Efficient Operations**: Enables efficient searching, insertion, and deletion operations in certain tree types like binary search trees.
- **Structured Traversal**: Facilitates traversal and organization of data in a structured manner through various traversal algorithms.
- **Dynamic Growth**: Supports dynamic data that can grow and shrink without reorganizing the entire structure.
- **Foundation for Complex Structures**: Provides a flexible way to implement other complex data structures like heaps, tries, and balanced trees.

### Data Fields
- **Node**: Each node contains:
  - **Data**: The value or information stored in the node.
  - **Children**: References to the child nodes (could be a list or array).
  - **Parent (optional)**: Reference to the parent node, useful for upward traversal.
- **Root**: The topmost node of the tree, with no parent.
- **Size (optional)**: The total number of nodes in the tree.

### Operations
- **Insert(element, parent)**: Adds a new node with the specified element as a child of the given parent node.
- **Remove(element)**: Deletes the node containing the specified element, and reassigns or removes its children accordingly.
- **Find(element)**: Searches for a node containing the specified element and returns its reference.
- **Traverse(order)**: Visits all nodes in the tree following a specific traversal order (e.g., pre-order, in-order, post-order, level-order).
- **GetParent(node)**: Retrieves the parent of a given node.
- **GetChildren(node)**: Retrieves the list of children for a given node.
- **GetDepth(node)**: Determines the depth level of a given node within the tree.
- **GetHeight()**: Calculates the height of the tree, which is the length of the longest path from the root to a leaf.
- **IsEmpty()**: Checks whether the tree contains any nodes.
- **Clear()**: Removes all nodes from the tree, resetting it to an empty state.

### When to Use
- When you need to represent hierarchical relationships such as organizational charts or file systems.
- In applications requiring efficient searching, insertion, and deletion of elements, especially with structures like binary search trees.
- When implementing other complex data structures like heaps, tries, or balanced trees that rely on tree properties.
- If you need to perform operations that benefit from tree traversal algorithms for processing data.
- When the data is naturally hierarchical and benefits from a parent-child organizational structure.

## Binary Tree

A **Binary Tree** is a hierarchical data structure in which each node has at most two children, referred to as the left child and the right child. This structure starts with a single node called the root, and each child node can, in turn, have its own children, forming a tree-like structure. Binary Trees are fundamental in various applications, including search trees, expression parsing, and organizing hierarchical data.

### Benefits
- **Efficient Operations**: Enables efficient searching, insertion, and deletion operations in specialized forms like Binary Search Trees.
- **Clear Hierarchical Structure**: Provides a clear hierarchical structure that is easy to visualize and understand.
- **Versatile Traversal Methods**: Facilitates various tree traversal methods (in-order, pre-order, post-order) for different types of data processing.
- **Foundation for Other Structures**: Supports the implementation of other complex data structures such as heaps and priority queues.
- **Balanced Implementations**: Allows for balanced tree implementations, ensuring optimal performance for dynamic datasets.

### Data Fields
- **Node**: Each node contains:
  - **Data**: The value or information stored in the node.
  - **Left Child**: A reference to the left child node.
  - **Right Child**: A reference to the right child node.
- **Root**: The topmost node of the binary tree, which has no parent. If the tree is empty, the root is `null`.
- **Size (optional)**: Keeps track of the total number of nodes present in the binary tree.

### Operations
- **Insert(element)**: Adds a new node with the specified element to the binary tree, maintaining the tree's properties (e.g., in a Binary Search Tree, ensuring left children are less than the parent and right children are greater).
- **Remove(element)**: Deletes the node containing the specified element from the tree and restructures the tree to maintain its properties.
- **Find(element)**: Searches for a node containing the specified element and returns its reference if found.
- **Traverse(order)**: Visits all nodes in the tree following a specific traversal order:
  - **In-Order**: Left subtree, root, right subtree.
  - **Pre-Order**: Root, left subtree, right subtree.
  - **Post-Order**: Left subtree, right subtree, root.
  - **Level-Order**: Breadth-first traversal across levels.
- **GetHeight()**: Calculates the height of the tree, defined as the length of the longest path from the root to a leaf node.
- **GetDepth(node)**: Determines the depth level of a given node within the tree, counting the number of edges from the root to that node.
- **IsEmpty()**: Checks whether the binary tree contains any nodes by verifying if the root is `null`.
- **Clear()**: Removes all nodes from the binary tree, resetting it to an empty state by setting the root to `null` and size to zero.
- **Contains(element)**: Checks whether a specific element exists within the binary tree by traversing the tree based on the binary search property.
- **FindMin()**: Retrieves the node with the smallest value in the binary search tree by continuously traversing the left child nodes.
- **FindMax()**: Retrieves the node with the largest value in the binary search tree by continuously traversing the right child nodes.

### When to Use
- When you need a data structure that maintains a dynamic set of elements with efficient search, insert, and delete operations, especially in the form of Binary Search Trees.
- In applications requiring hierarchical data representation, such as organizational charts, file systems, or XML/HTML document models.
- When implementing algorithms that benefit from tree traversal techniques, like expression evaluation or syntax parsing.
- If you need to build other complex data structures like heaps, priority queues, or balanced trees (e.g., AVL Trees, Red-Black Trees) that rely on binary tree properties.
- When optimizing for scenarios where balanced trees can ensure consistent performance, preventing degradation in operations due to unbalanced structures.

## Binary Search Tree (BST)

A **Binary Search Tree (BST)** is a specialized form of a binary tree where each node has at most two children, and for every node, all elements in its left subtree are less than the node’s value, and all elements in its right subtree are greater. This property ensures that operations such as search, insertion, and deletion can be performed efficiently by leveraging the tree's ordered structure.

### Benefits
- **Efficient Operations**: Enables efficient searching, insertion, and deletion operations with average-case time complexity of O(log n).
- **Dynamic Order Maintenance**: Maintains a dynamic dataset that can grow and shrink while preserving order.
- **Sorted Traversal**: Facilitates in-order traversal to retrieve elements in a sorted sequence.
- **Foundation for Other Structures**: Supports the implementation of other data structures like sets and maps.
- **Clear Hierarchical Structure**: Provides a clear hierarchical structure that is easy to visualize and manage.

### Data Fields
- **Node**: Each node contains:
  - **Data**: The value or information stored in the node.
  - **Left Child**: A reference to the left child node, containing values less than the current node.
  - **Right Child**: A reference to the right child node, containing values greater than the current node.
- **Root**: The topmost node of the BST, which has no parent. If the tree is empty, the root is `null`.
- **Size (optional)**: Keeps track of the total number of nodes present in the BST.

### Operations
- **Insert(element)**: Adds a new node with the specified element to the BST, maintaining the binary search property by placing it in the correct position based on its value.
- **Remove(element)**: Deletes the node containing the specified element from the BST and restructures the tree to maintain the binary search property.
- **Find(element)**: Searches for a node containing the specified element and returns its reference if found, enabling efficient lookup.
- **Traverse(order)**: Visits all nodes in the BST following a specific traversal order:
  - **In-Order**: Left subtree, root, right subtree (results in sorted order).
  - **Pre-Order**: Root, left subtree, right subtree.
  - **Post-Order**: Left subtree, right subtree, root.
  - **Level-Order**: Breadth-first traversal across levels.
- **GetHeight()**: Calculates the height of the BST, defined as the length of the longest path from the root to a leaf node, which helps in assessing the tree's balance.
- **GetDepth(node)**: Determines the depth level of a given node within the BST, counting the number of edges from the root to that node.
- **IsEmpty()**: Checks whether the BST contains any nodes by verifying if the root is `null`.
- **Clear()**: Removes all nodes from the BST, resetting it to an empty state by setting the root to `null` and size to zero.
- **Contains(element)**: Checks whether a specific element exists within the BST by traversing the tree based on the binary search property.
- **FindMin()**: Retrieves the node with the smallest value in the BST by continuously traversing the left child nodes.
- **FindMax()**: Retrieves the node with the largest value in the BST by continuously traversing the right child nodes.

### When to Use
- When you need a data structure that maintains a dynamic set of ordered elements with efficient search, insert, and delete operations.
- In applications requiring sorted data retrieval, such as databases, priority queues, and event scheduling systems.
- When implementing associative arrays or dictionaries where keys need to be stored in a sorted manner for quick access.
- If you need a hierarchical organization of data that allows for easy traversal and manipulation based on element values.
- When building other complex data structures like balanced trees (e.g., AVL Trees, Red-Black Trees) that enhance the performance and reliability of BST operations.

## Heap

A **Heap** is a specialized tree-based data structure that satisfies the heap property: in a **max-heap**, for any given node C, if P is a parent node of C, then the key of P is greater than or equal to the key of C. In a **min-heap**, the key of P is less than or equal to the key of C. Heaps are typically implemented as complete binary trees and are commonly used to implement priority queues, efficient sorting algorithms like Heap Sort, and for managing dynamic sets where quick access to the highest or lowest priority element is required.

### Benefits
- **Efficient Priority Access**: Provides efficient access to the highest (max-heap) or lowest (min-heap) priority element with constant time complexity.
- **Efficient Operations**: Supports efficient insertion and deletion operations, typically in logarithmic time.
- **Priority Queue Implementation**: Facilitates the implementation of priority queues, which are essential in various algorithms and applications.
- **Heap Sort**: Serves as the underlying structure for Heap Sort, offering an in-place and efficient sorting mechanism.
- **Balanced Structure**: Ensures a balanced tree structure by maintaining the complete binary tree property, which guarantees optimal performance for heap operations.

### Data Fields
- **Elements Array**: An underlying array that stores the heap's elements in a specific order to represent the complete binary tree structure efficiently.
- **Size**: The current number of elements present in the heap.
- **Capacity**: The total number of elements the heap can hold before needing to resize the underlying array.
- **Heap Type**: Indicates whether the heap is a max-heap or a min-heap, determining the heap property to be maintained.

### Operations
- **Insert(element)**: Adds a new element to the heap. The element is initially placed at the end of the array, and then the heap property is restored by "percolating up" the element to its correct position.
- **Remove()**: Removes and returns the root element (the highest or lowest priority element). The last element in the array is moved to the root, and the heap property is restored by "percolating down" this element.
- **Peek()**: Retrieves the root element without removing it, allowing quick access to the highest or lowest priority element.
- **Heapify()**: Converts an arbitrary array into a heap by arranging the elements to satisfy the heap property. This is typically done in linear time.
- **BuildHeap(elements)**: Constructs a heap from a given list of elements by inserting each element into the heap and maintaining the heap property.
- **IncreaseKey(index, newValue) / DecreaseKey(index, newValue)**: Updates the value of an element at a specific index and adjusts its position in the heap to maintain the heap property.
- **IsEmpty()**: Checks whether the heap contains any elements by verifying if the size is zero.
- **Size()**: Returns the current number of elements in the heap, allowing for quick size retrieval.
- **Clear()**: Removes all elements from the heap, resetting the size to zero and optionally deallocating the underlying array.
- **Contains(element) (optional)**: Checks whether a specific element exists within the heap by traversing the underlying heap structure.

### When to Use
- When implementing priority queues where quick access to the highest or lowest priority element is essential, such as in task scheduling, simulation systems, and algorithm implementations like Dijkstra's shortest path.
- In Heap Sort, an efficient sorting algorithm that leverages the heap property to sort elements in-place with a time complexity of O(n log n).
- When managing dynamic sets of data where elements need to be inserted and removed frequently while maintaining order based on priority.
- In scenarios requiring efficient median finding or k-th largest/smallest element retrieval from a dataset.
- When you need a balanced tree structure that guarantees optimal performance for insertion, deletion, and access operations without the overhead of maintaining more complex balanced trees like AVL or Red-Black Trees.

## Graph

A **Graph** is a versatile data structure consisting of a set of vertices (also called nodes) connected by edges. Graphs can represent various real-world systems such as social networks, transportation networks, and dependency structures. They can be **directed** (where edges have a direction) or **undirected** (where edges have no direction), and they can also include **weighted edges** that carry additional information like cost or distance.

### Benefits
- **Complex Relationship Representation**: Represents complex relationships and interconnected data naturally, making it ideal for modeling networks.
- **Algorithm Support**: Supports a wide range of algorithms for traversal, searching, and optimization, enabling efficient problem-solving.
- **Flexible Structure**: Flexible in structure, allowing for both sparse and dense connections based on the application's needs.
- **Real-World Applications**: Facilitates the implementation of various real-world applications like routing, scheduling, and resource management.
- **Data Visualization**: Enhances the ability to visualize and analyze relationships through graph-based representations.

### Data Fields
- **Vertices (Nodes)**: Individual elements in the graph that can represent entities such as people, locations, or objects.
- **Edges (Links)**: Connections between vertices that can be directed or undirected, and may carry weights or other attributes.
- **Adjacency List or Adjacency Matrix**:
  - **Adjacency List**: A collection of lists where each list corresponds to a vertex and contains its adjacent vertices.
  - **Adjacency Matrix**: A 2D array where each cell (i, j) indicates the presence and possibly the weight of an edge between vertices i and j.
- **Weights (optional)**: Numerical values assigned to edges representing costs, distances, or other metrics relevant to the application.
- **Directed/Undirected Flag**: Indicates whether the graph is directed (edges have a direction) or undirected (edges have no direction).
- **Additional Attributes (optional)**: Can include properties like color, capacity, or labels for both vertices and edges to support more complex functionalities.

### Operations
- **AddVertex(vertex)**: Inserts a new vertex into the graph.
- **RemoveVertex(vertex)**: Deletes an existing vertex and all associated edges from the graph.
- **AddEdge(source, destination, weight)**: Creates a new edge between two vertices, optionally assigning a weight.
- **RemoveEdge(source, destination)**: Removes an existing edge between two specified vertices.
- **GetAdjacentVertices(vertex)**: Retrieves all vertices adjacent to a given vertex.
- **ContainsVertex(vertex)**: Checks whether a specific vertex exists within the graph.
- **ContainsEdge(source, destination)**: Determines if an edge exists between two specified vertices.
- **GetDegree(vertex)**: Returns the number of edges connected to a given vertex.
- **Traverse(order)**: Visits all vertices and edges in a specified order (e.g., Depth-First Search, Breadth-First Search).
- **FindPath(source, destination)**: Identifies a path between two vertices, potentially using algorithms like Dijkstra’s or A*.
- **DetectCycle()**: Determines whether the graph contains any cycles.
- **IsConnected()**: Checks if there is a path between every pair of vertices in the graph.

### When to Use
- When modeling networks with interconnected entities, such as social networks, computer networks, or transportation systems.
- In applications requiring efficient pathfinding and routing, like GPS navigation, network routing protocols, and game development.
- When needing to represent dependencies or relationships in systems like project management (e.g., task dependencies) or compiler design (e.g., syntax trees).
- For implementing algorithms that require traversing or searching complex structures, such as web crawlers or recommendation systems.
- When analyzing relationships and connectivity within data, enabling tasks like community detection, centrality measurement, and network optimization.

## Stack

A **Stack** is a linear data structure that follows the **Last-In-First-Out (LIFO)** principle, where the most recently added element is the first to be removed. It consists of a collection of elements with two primary operations: **push**, which adds an element to the top of the stack, and **pop**, which removes the top element. Stacks are used to manage data in a controlled manner, ensuring that elements are accessed in the correct order. They are fundamental in various applications, including algorithm implementations, expression evaluation, and memory management in programming languages.

### Benefits
- **Controlled Access**: Provides controlled access to data, ensuring that the most recently added elements are accessed first.
- **Undo Mechanism**: Facilitates the implementation of undo mechanisms in applications by tracking recent actions.
- **Efficient Memory Usage**: Enables efficient memory usage in recursive algorithm calls by storing return addresses and local variables.
- **Expression Parsing**: Simplifies the parsing of expressions and syntax checking in compilers and interpreters.
- **Backtracking Algorithms**: Supports easy implementation of backtracking algorithms in problem-solving scenarios.

### Data Fields
- **Elements**: An underlying storage mechanism (such as an array or linked list) that holds the stack's elements.
- **Top**: A reference or index indicating the current top position of the stack where the next element will be pushed or the last element will be popped.
- **Capacity (optional)**: The maximum number of elements the stack can hold, applicable in fixed-size implementations.

### Operations
- **Push(element)**: Adds a new element to the top of the stack, updating the top reference accordingly.
- **Pop()**: Removes and returns the element at the top of the stack, updating the top reference.
- **Peek()**: Retrieves the element at the top of the stack without removing it, allowing inspection of the top element.
- **IsEmpty()**: Checks whether the stack contains any elements by verifying if the top is `null` or at the initial position.
- **Size()**: Returns the current number of elements in the stack, often maintained as a separate field for efficiency.
- **Clear()**: Removes all elements from the stack, resetting the top reference to its initial state.
- **Contains(element) (optional)**: Checks whether a specific element exists within the stack by traversing the underlying storage.

### When to Use
- When you need a data structure that provides LIFO access to elements, such as in function call management in programming languages.
- In scenarios where tracking the most recent operations is essential, like implementing undo features in text editors or graphical applications.
- When performing **Depth-First Search (DFS)** in graph or tree traversal algorithms, utilizing stacks to manage the traversal order.
- For parsing and evaluating expressions in compilers and calculators, where stacks help manage operators and operands efficiently.
- When implementing backtracking algorithms that require revisiting previous states or configurations in problem-solving processes.

## Queue

A **Queue** is a linear data structure that follows the **First-In-First-Out (FIFO)** principle, where the first element added is the first one to be removed. It consists of a collection of elements with two primary operations: **enqueue**, which adds an element to the end of the queue, and **dequeue**, which removes the element from the front. Queues are used to manage data in an orderly fashion, ensuring that elements are processed in the order they arrive. They are fundamental in various applications, including task scheduling, breadth-first search in algorithms, and handling asynchronous data streams.

### Benefits
- **Orderly Processing**: Ensures orderly processing by adhering to the FIFO principle, maintaining the sequence of elements as they arrive.
- **Efficient Task Management**: Facilitates efficient management of tasks and resources in scenarios like job scheduling and buffer handling.
- **Asynchronous Handling**: Enables smooth handling of asynchronous data streams, such as in IO operations and event-driven programming.
- **Algorithm Support**: Simplifies implementation of **Breadth-First Search (BFS)** algorithms in graph and tree traversal.
- **Predictable Behavior**: Promotes clear and predictable behavior in systems requiring fair processing of requests or tasks.

### Data Fields
- **Elements**: An underlying storage mechanism (such as an array, linked list, or circular buffer) that holds the queue's elements.
- **Front**: A reference or index indicating the position of the first element in the queue, where elements are dequeued.
- **Rear**: A reference or index indicating the position where new elements are enqueued at the end of the queue.
- **Size**: Keeps track of the current number of elements present in the queue.
- **Capacity (optional)**: The maximum number of elements the queue can hold before needing to resize in fixed-size implementations.

### Operations
- **Enqueue(element)**: Adds a new element to the rear of the queue, updating the rear reference accordingly. If the queue is full (in fixed-size implementations), it may trigger a resize or throw an exception.
- **Dequeue()**: Removes and returns the element at the front of the queue, updating the front reference. If the queue is empty, it may throw an exception or return a sentinel value.
- **Peek()**: Retrieves the element at the front of the queue without removing it, allowing inspection of the next element to be processed.
- **IsEmpty()**: Checks whether the queue contains any elements by verifying if the size is zero or if the front and rear references are equal.
- **IsFull() (optional)**: Determines if the queue has reached its capacity in fixed-size implementations.
- **Size()**: Returns the current number of elements in the queue, allowing for quick size retrieval.
- **Clear()**: Removes all elements from the queue, resetting the front and rear references and the size to zero.
- **Contains(element) (optional)**: Checks whether a specific element exists within the queue by traversing the underlying storage.
- **ToArray() (optional)**: Converts the queue into an array or list, facilitating operations that require indexed access.

### When to Use
- When you need a data structure that processes elements in the exact order they arrive, such as in task scheduling systems or print queues.
- In scenarios requiring fair resource allocation, ensuring that the first request received is the first one to be handled.
- When implementing **Breadth-First Search (BFS)** algorithms for traversing graphs or trees, as queues naturally support level-by-level exploration.
- For managing asynchronous data streams, such as handling incoming requests in web servers or buffering data in IO operations.
- When building systems that require orderly processing of events or messages, ensuring consistency and predictability in behavior.

## Deque (Double-Ended Queue)

A **Deque (Double-Ended Queue)** is a versatile linear data structure that allows insertion and removal of elements from both the front and the rear ends. Unlike standard queues and stacks, deques provide the flexibility to operate on both ends, enabling a combination of queue and stack functionalities. This makes deques suitable for a wide range of applications where elements need to be processed in different orders.

### Benefits
- **Flexible Operations**: Allows insertion and removal of elements from both ends, providing greater flexibility compared to standard queues and stacks.
- **Dual Functionality**: Facilitates efficient implementation of both FIFO (First-In-First-Out) and LIFO (Last-In-First-Out) operations within the same data structure.
- **Combined Behaviors**: Enables the use of deques in applications requiring both queue and stack behaviors, reducing the need for multiple separate data structures.
- **Enhanced Access**: Supports operations that require access to elements at both ends, enhancing the capability to handle complex data processing scenarios.
- **Performance Optimization**: Improves performance in scenarios where elements need to be frequently added or removed from both ends, avoiding the overhead of shifting elements.

### Data Fields
- **Elements**: An underlying storage mechanism (such as a dynamic array or a doubly linked list) that holds the deque's elements.
- **Front**: A reference or index indicating the position at the front of the deque where elements can be inserted or removed.
- **Rear**: A reference or index indicating the position at the rear of the deque where elements can be inserted or removed.
- **Size**: Keeps track of the current number of elements present in the deque.
- **Capacity (optional)**: The maximum number of elements the deque can hold before needing to resize the underlying storage.

### Operations
- **AddFirst(element)**: Inserts a new element at the front of the deque, updating the front reference accordingly.
- **AddLast(element)**: Appends a new element to the rear of the deque, updating the rear reference accordingly.
- **RemoveFirst()**: Removes and returns the element at the front of the deque, updating the front reference.
- **RemoveLast()**: Removes and returns the element at the rear of the deque, updating the rear reference.
- **PeekFirst()**: Retrieves the element at the front of the deque without removing it, allowing inspection of the first element.
- **PeekLast()**: Retrieves the element at the rear of the deque without removing it, allowing inspection of the last element.
- **IsEmpty()**: Checks whether the deque contains any elements by verifying if the size is zero or if the front and rear references are equal.
- **Size()**: Returns the current number of elements in the deque, enabling quick size retrieval.
- **Clear()**: Removes all elements from the deque, resetting the front and rear references and the size to zero.
- **Contains(element) (optional)**: Checks whether a specific element exists within the deque by traversing the underlying storage.
- **ToArray() (optional)**: Converts the deque into an array or list, facilitating operations that require indexed access.

### When to Use
- When you need a data structure that supports both queue and stack operations, allowing elements to be added or removed from both ends.
- In scenarios requiring efficient insertion and deletion of elements from both the front and rear, such as implementing sliding window algorithms or managing task scheduling with varying priorities.
- When building systems that require flexible data processing, where elements may need to be accessed or modified from either end, like in certain caching mechanisms or double-ended priority queues.
- If you need to implement algorithms that benefit from bidirectional traversal and manipulation of elements, enhancing the capability to handle complex data processing tasks.
- When optimizing performance in applications where frequent additions and removals from both ends of the collection are necessary, avoiding the overhead associated with shifting elements in standard queues or stacks.

## Priority Queue

A **Priority Queue** is an abstract data structure that operates similarly to a regular queue or stack, but where each element has an associated priority. Elements are dequeued based on their priority rather than their insertion order, with higher priority elements being served before lower priority ones. This structure is commonly implemented using heaps, such as binary heaps, to efficiently manage and retrieve elements based on their priorities. Priority Queues are essential in scenarios where processing order is determined by importance or urgency, such as task scheduling, algorithm implementations like Dijkstra’s shortest path, and managing events in simulations.

### Benefits
- **Efficient Priority Access**: Provides efficient access to the highest or lowest priority element, enabling quick retrieval and processing.
- **Dynamic Ordering**: Facilitates dynamic ordering of elements based on changing priorities, ensuring the most relevant elements are always accessible.
- **Efficient Operations**: Supports efficient insertion and deletion operations, typically in logarithmic time, making it suitable for large datasets.
- **Algorithm Implementation**: Enables the implementation of various algorithms that require prioritized processing, such as graph traversal and scheduling.
- **Organized Structure**: Maintains a clear and organized structure for managing elements with varying levels of importance or urgency.

### Data Fields
- **Elements Array**: An underlying array or heap structure that stores the elements in a specific order based on their priorities.
- **Size**: The current number of elements present in the priority queue.
- **Capacity**: The total number of elements the priority queue can hold before needing to resize the underlying storage.
- **Comparator (optional)**: A function or method that defines the priority ordering, determining how elements are compared and prioritized.

### Operations
- **Insert(element, priority)**: Adds a new element with the specified priority to the priority queue, maintaining the heap property by repositioning the element as necessary.
- **ExtractMax() / ExtractMin()**: Removes and returns the element with the highest (max-heap) or lowest (min-heap) priority, respectively, and restructures the heap to maintain the priority order.
- **PeekMax() / PeekMin()**: Retrieves the element with the highest or lowest priority without removing it from the priority queue.
- **Heapify()**: Converts an arbitrary array into a heap by arranging the elements to satisfy the heap property.
- **BuildHeap(elements)**: Constructs a heap from a given list of elements by inserting each element into the heap and maintaining the heap property.
- **IncreasePriority(element, newPriority)**: Updates the priority of a specified element and repositions it within the heap to maintain the heap property.
- **DecreasePriority(element, newPriority)**: Lowers the priority of a specified element and repositions it within the heap accordingly.
- **IsEmpty()**: Checks whether the priority queue contains any elements by verifying if the size is zero.
- **Size()**: Returns the current number of elements in the priority queue, allowing for quick size retrieval.
- **Clear()**: Removes all elements from the priority queue, resetting the size to zero and optionally deallocating the underlying storage.
- **Contains(element) (optional)**: Checks whether a specific element exists within the priority queue by traversing the underlying heap structure.

### When to Use
- When you need a data structure that processes elements based on their priority rather than their insertion order, such as in task scheduling systems where certain tasks must be handled before others.
- In algorithms that require efficient retrieval of the next most important element, like Dijkstra’s shortest path or A* search algorithms used in pathfinding and graph traversal.
- For managing events in simulations or real-time systems where events must be processed in order of urgency or importance.
- When implementing priority-based data processing systems, such as bandwidth management in networking, where certain data packets must be prioritized over others.
- In applications that require dynamic ordering of elements, allowing priorities to change over time and ensuring that the highest priority elements are always accessible for processing.

## Map

A **Map** is a fundamental data structure that stores elements as key-value pairs, allowing for efficient retrieval, insertion, and deletion of values based on their unique keys. Unlike arrays or lists, where elements are accessed by their index, maps provide a direct association between a key and its corresponding value, making them ideal for scenarios where quick lookups and organized data storage are essential. Maps can be implemented using various underlying structures such as hash tables, binary search trees, or linked lists, each offering different performance characteristics.

### Benefits
- **Efficient Operations**: Provides efficient retrieval, insertion, and deletion of values based on unique keys.
- **Quick Lookups**: Enables quick lookups without the need to search through the entire dataset.
- **Clear Association**: Maintains a clear association between keys and their corresponding values, enhancing data organization.
- **Dynamic Resizing**: Supports dynamic resizing and efficient memory usage in implementations like hash tables.
- **Foundation for Complex Structures**: Facilitates the implementation of other complex data structures and algorithms that require key-based access.

### Data Fields
- **Underlying Structure**: The internal mechanism used to store key-value pairs, such as a hash table, binary search tree, or linked list, which determines the performance characteristics of the map.
- **Buckets (in Hash Maps)**: Containers within a hash table that store key-value pairs, typically organized based on the hash of the key to ensure even distribution and minimize collisions.
- **Nodes (in Tree Maps)**: Elements in a binary search tree-based map that store key-value pairs while maintaining the order of keys.
- **Size**: The current number of key-value pairs stored in the map.
- **Capacity (optional)**: The total number of key-value pairs the map can hold before needing to resize or rehash in implementations like hash tables.
- **Load Factor (optional)**: A measure that determines when the map should increase its capacity to maintain efficient operations, commonly used in hash table implementations.

### Operations
- **Put(key, value)**: Inserts a new key-value pair into the map or updates the value if the key already exists. Ensures that the key remains unique within the map.
- **Get(key)**: Retrieves the value associated with the specified key, allowing for quick access without searching the entire dataset.
- **Remove(key)**: Deletes the key-value pair associated with the specified key from the map, freeing up space and maintaining data integrity.
- **ContainsKey(key)**: Checks whether a specific key exists within the map, enabling conditional operations based on key presence.
- **ContainsValue(value)**: Determines if a particular value exists in the map, useful for reverse lookups or validations.
- **Size()**: Returns the current number of key-value pairs in the map, providing insight into the map's occupancy and performance.
- **Clear()**: Removes all key-value pairs from the map, resetting it to an empty state.
- **IsEmpty()**: Checks whether the map contains any key-value pairs by verifying if the size is zero.
- **KeySet()**: Retrieves a collection of all keys present in the map, useful for iterating over keys or performing bulk operations.
- **Values()**: Retrieves a collection of all values stored in the map, allowing for operations that focus solely on values without considering keys.
- **EntrySet()**: Provides a set of all key-value pairs in the map, facilitating operations that require access to both keys and their associated values simultaneously.
- **GetOrDefault(key, defaultValue) (optional)**: Retrieves the value associated with the specified key or returns a default value if the key is not present, enhancing safety and reducing the need for explicit checks.

### When to Use
- When you need to associate unique keys with specific values for efficient retrieval, such as in dictionaries, caches, or indexing systems.
- In scenarios requiring quick lookups, insertions, and deletions based on keys, without the overhead of searching through a list or array.
- When implementing applications like databases, configuration settings, or user profiles where data is naturally mapped to unique identifiers.
- If you need to maintain a clear and organized relationship between keys and values, ensuring that each key maps to one and only one value.
- When building other complex data structures and algorithms that rely on key-based access, such as graph representations, indexing mechanisms, or associative arrays.

## Hash Table

A **Hash Table** is a data structure that implements an associative array, allowing the storage and retrieval of key-value pairs with high efficiency. It uses a **hash function** to compute an index into an array of **buckets** or slots, from which the desired value can be found. Hash Tables are widely used for tasks that require fast data lookup, insertion, and deletion, making them essential in various applications such as databases, caching systems, and symbol tables in compilers.

### Benefits
- **Constant-Time Operations**: Provides constant-time average-case complexity for search, insert, and delete operations, enabling rapid data access.
- **Clear Key-Value Association**: Maintains a clear association between unique keys and their corresponding values, enhancing data organization.
- **Efficient Distribution**: Handles large datasets efficiently by distributing entries uniformly across buckets using a good hash function.
- **Dynamic Resizing**: Supports dynamic resizing, allowing the Hash Table to grow or shrink based on the number of elements, ensuring optimal performance.
- **Foundation for Complex Structures**: Facilitates the implementation of other complex data structures and algorithms that rely on quick key-based access.

### Data Fields
- **Buckets**: An array of slots where each slot can hold one or more key-value pairs, typically managed using linked lists or other secondary structures to handle collisions.
- **Hash Function**: A function that takes a key and computes an index in the buckets array, ensuring an even distribution of entries to minimize collisions.
- **Keys**: Unique identifiers used to access corresponding values within the Hash Table.
- **Values**: The data or objects associated with each key, which are stored and retrieved through the Hash Table.
- **Capacity**: The total number of buckets available in the Hash Table, which determines how many key-value pairs can be stored before resizing is needed.
- **Size**: The current number of key-value pairs stored in the Hash Table.
- **Load Factor**: A measure that determines when the Hash Table should resize to maintain efficient operations, typically defined as the ratio of size to capacity.

### Operations
- **Insert(key, value)**: Adds a new key-value pair to the Hash Table by computing the bucket index using the hash function and placing the pair in the appropriate bucket. If the key already exists, its value is updated.
- **Search(key)**: Retrieves the value associated with the specified key by computing its bucket index and searching through the bucket for the key.
- **Delete(key)**: Removes the key-value pair associated with the specified key by locating it in the appropriate bucket and deleting it.
- **ContainsKey(key)**: Checks whether a specific key exists within the Hash Table, enabling conditional operations based on key presence.
- **ContainsValue(value)**: Determines if a particular value exists in the Hash Table by traversing all buckets and comparing values.
- **Resize(newCapacity)**: Adjusts the capacity of the Hash Table by creating a new array of buckets and rehashing all existing key-value pairs to distribute them uniformly.
- **Clear()**: Removes all key-value pairs from the Hash Table, resetting the size to zero and optionally deallocating the underlying buckets.
- **GetKeys()**: Retrieves a collection of all keys present in the Hash Table, useful for iterating over keys or performing bulk operations.
- **GetValues()**: Retrieves a collection of all values stored in the Hash Table, allowing for operations that focus solely on values without considering keys.
- **GetLoadFactor()**: Returns the current load factor of the Hash Table, providing insight into its occupancy and performance.

### When to Use
- When you need a data structure that allows for fast retrieval, insertion, and deletion of elements based on unique keys, such as in caching systems or databases.
- In scenarios where maintaining a clear association between keys and values is essential, enabling organized and efficient data management.
- When implementing applications that require frequent lookups, such as symbol tables in compilers, configuration settings, or user profiles.
- If you need to handle large datasets with minimal performance degradation, leveraging the uniform distribution of entries across buckets.
- When building other complex data structures and algorithms that rely on quick key-based access, such as graph representations, indexing mechanisms, or associative arrays.
