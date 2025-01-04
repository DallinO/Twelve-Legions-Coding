## Templates
## Shallow vs Deep Copy
## Iterators
In C++, iterators are objects used to traverse sequences of elements in various data structures like arrays, vectors, lists, maps, and sets. They provide a uniform way to access elements without exposing the underlying implementation details of the data structure. Iterators work similarly to pointers but are more abstract and can be used with a wide range of data structures.

    Iterator Types:
        Input Iterators: Read-only iterators that can be used for a single pass to read values from a data structure.
        Output Iterators: Write-only iterators used to write values into a data structure. Output iterators are less commonly used.
        Forward Iterators: Read and write iterators that support single-pass traversal and can be incremented. Forward iterators are used in many standard library algorithms.
        Bidirectional Iterators: Read and write iterators that support both forward and backward traversal. They can be incremented and decremented.
        Random Access Iterators: Most versatile iterators that support arithmetic operations like addition and subtraction, allowing efficient random access to elements.

    Iterator Operations:
        Increment: Move the iterator to the next element.
        Decrement: Move the iterator to the previous element (for bidirectional iterators).
        Dereference: Access the value at the current iterator position.
        Comparison: Compare iterators for equality or inequality.
        Arithmetic: Advance or move iterators by a specified number of positions (for random access iterators).

    Iterator Range:
        Iterators are often used to define a range, which consists of a pair of iterators representing the beginning and end of the sequence. The range includes all elements between the beginning iterator (inclusive) and the end iterator (exclusive).

    Iterator Usage:
        Iterators are commonly used in combination with standard library algorithms like std::find, std::sort, std::copy, etc., to perform various operations on containers.
        Iterators can be used in range-based loops (for loops) to iterate over elements in a container.

    Iterator Validity:
        Iterator validity refers to the state of an iterator relative to the underlying data structure. Iterators can become invalid if the underlying data structure is modified (e.g., elements are added or removed). Using invalid iterators can lead to undefined behavior.

## Classes
### Constructors
#### Member Initializer List
The member initializer list is a part of the constructor syntax in C++. It's used to initialize member variables of a class when an object of that class is constructed.
```
ClassName::ClassName(parameter_list)
    : member1(initial_value), member2(initial_value), ..., memberN(initial_value)
{
    // Constructor body
}

```
Let's break it down:

- `ClassName::ClassName(parameter_list)`: This is the constructor declaration. ClassName is the name of the class, and parameter_list lists the parameters of the constructor.

- `: member1(initial_value), member2(initial_value), ..., memberN(initial_value)`
: This is the member initializer list. It comes after the constructor declaration and before the constructor body. Each member variable is initialized with an initial value inside this list.

- `{ /* Constructor body */ }`: This is the constructor body, where you can put additional initialization logic or other instructions.

Here's an example of how you might use the member initializer list in a class constructor:
```
class MyClass {
private:
    int x;
    double y;

public:
    MyClass(int x_val, double y_val)
        : x(x_val), y(y_val)
    {
        // Constructor body (if needed)
    }
};

```
In this example, the constructor initializes the member variables x and y using the member initializer list. This syntax allows for efficient and concise initialization of member variables when constructing objects of the class.

#### Copy Constructor
The line iterator(const iterator & rhs) is the declaration of the copy constructor for the iterator class. Let's break it down:

iterator: This specifies the name of the constructor, which is iterator.
(const iterator & rhs): This part specifies the parameter of the constructor. It takes a constant reference to another iterator (rhs), which is the iterator being copied.

So, the entire line means that this constructor is used to create a new iterator by copying the contents of another iterator.

Inside the copy constructor, typically, you would perform a shallow copy of the member variables. In this case, the copy constructor initializes the new iterator's p pointer with the same value as the p pointer of the iterator being copied (rhs.p). This ensures that both iterators point to the same location in memory, effectively creating a copy of the iterator.

The term "rhs" stands for "right-hand side." In the context of the copy constructor declaration iterator(const iterator & rhs), "rhs" refers to the right-hand side of an assignment or initialization operation.

When you're copying one iterator to another, you're essentially assigning or initializing one iterator with the value of another. In this case, "rhs" represents the iterator on the right-hand side of the assignment or initialization.

It's a common convention in C++ to use "rhs" to name parameters that represent values being copied from the right-hand side of an assignment. Conversely, "lhs" (left-hand side) would refer to the value being assigned to.

So, in the copy constructor declaration iterator(const iterator & rhs), "rhs" is just a variable name chosen to indicate that it represents the iterator being copied from the right-hand side.

## Pointers
Pointers in C++ are variables that store memory addresses. They allow you to indirectly access and manipulate memory locations, which can be very powerful but also require careful handling to avoid bugs and errors. Here's a breakdown of pointers in C++:

#### Declaration
Pointers are declared by specifying the type they point to, followed by an asterisk *, and then the pointer name. For example:
```
int* ptr;
```

#### Initialization
Pointers can be initialized to point to a specific memory address or to another variable. If not initialized, they contain garbage values.
```
int x = 10;
int* ptr = &x;
```

#### Dereferencing
Dereferencing a pointer means accessing the value stored at the memory address it points to. This is done using the asterisk `*` operator.
```
int x = 10;
int* ptr = &x;
int value = *ptr;
```

#### Null Pointers
Pointers can have a special value called a null pointer, which indicates that they do not point to any valid memory address. It's represented by the literal `nullptr`.
```
int* ptr = nullptr;
```

#### Pointer Arithmetic
Pointers support arithmetic operations like addition and subtraction. When you perform arithmetic on a pointer, the result is adjusted based on the size of the type it points to.
```
int arr[5] = {1, 2, 3, 4, 5};
int* ptr = arr;
ptr++;
```

#### Pointer To Pointer
Pointers can also point to other pointers. These are called "pointer to pointer" or "double pointers".
```
int x = 10;
int* ptr1 = &x;
int** ptr2 = &ptr1;
```

### Operators
In C++, the `.` and `->` operators are used to access members of objects, but they are used in different contexts:
#### Arrow Operator
The arrow operator `->` is used to access members of an object through a pointer to that object. It is used with pointers to objects. It's a shorthand notation for dereferencing a pointer and accessing a member in one step.
Example:
```
MyClass* ptr = new MyClass();
ptr->memberFunction(); // Accessing a member function using the arrow operator
ptr->memberVariable = 10; // Accessing a member variable using the arrow operator
```
#### Dot Operator
The dot operator `.` is used to access members of an object when you have a direct instance of that object, i.e., when you're working with objects rather than pointers to objects. It is used with object instances.
Example:
```
MyClass obj;
obj.memberFunction(); // Accessing a member function using the dot operator
obj.memberVariable = 10; // Accessing a member variable using the dot operator
```

#### Address-of Operator
The address-of operator `&` is used to get the memory address of a variable.
```
int x = 10;
int* ptr = &x; // Pointer points to the address of x
```

## Operator Overloading
