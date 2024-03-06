# Data Structures
### Lists
In Erlang, lists are one of the fundamental data structures and are represented by sequences of elements enclosed in square brackets []. Lists can contain elements of any type, including other lists. Here are some basic operations and features of lists in
#### Creating Lists
```
List1 = [1, 2, 3, 4, 5],       % A list of integers
List2 = ["apple", "banana"],   % A list of strings
List3 = [1, "two", true].      % A list containing mixed types
```
Lists are immutable in Erlang, meaning that operations on lists create new lists rather than modifying existing ones. This property is fundamental to Erlang's functional programming paradigm.
#### List Comprehensions
In Erlang, list comprehensions provide a concise way to create new lists based on existing ones by applying transformations or filtering elements. They have a similar syntax to those found in other functional programming languages like Python and Haskell.

The general syntax of a list comprehension in Erlang is as follows:
```
[Expression || Generator1, Generator2, ..., GeneratorN]
```
`Expression` is the transformation or filtering applied to elements.
`Generator` is a pattern matching expression that iterates over elements of a list or other sequence. For example:
```
List = [1, 2, 3, 4, 5],
DoubledList = [X * 2 || X <- List].
```
The expression `X <- List` iterates over each element of `List` (1, 2, and 3), and for each iteration, `X` takes on the value of the current element. This will result in DoubledList being [2, 4, 6, 8, 10].

List comprehensions can also include filters to selectively include elements based on conditions. For example, to double only the even numbers from a list:
```
EvenDoubledList = [X * 2 || X <- List, X rem 2 =:= 0].
```
Here, X rem 2 =:= 0 is the filter condition, ensuring that only even numbers are doubled.

You can also use multiple generators in a list comprehension to iterate over multiple lists simultaneously. For example, to create a list of tuples combining elements from two lists:
```
List1 = [1, 2, 3],
List2 = [a, b, c],
CombinedList = [{X, Y} || X <- List1, Y <- List2].
```
This will result in CombinedList being [{1, a}, {1, b}, {1, c}, {2, a}, {2, b}, {2, c}, {3, a}, {3, b}, {3, c}].

List comprehensions are a powerful feature of Erlang, allowing for concise and expressive transformations and filtering of lists.

