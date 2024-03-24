## Higher Order Functions
### Map
The map converts a list to another list using a lambda function. The lambda function defines how to convert each item in the original list to an item in the resulting list. The map applies a function to each element in a list, transforming each element according to the provided function.
```
map(Function, List)
```
For example:
```
map(_, []) -> [];
map(Lambda, [First|Rest]) -> 
    [Lambda(First)|map(Lambda, Rest)].
```
Or using a list comprehension:
```
map(Lambda, List) -> 
    [Lambda(X) || X <- List].
```
#### Built-in Map Function2
Erlang provides a built-in `map` functions for mapping over lists:<br>
`lists:map/2`: This function applies a function to each elementof a list and returns a new list containing the results:
```
list:map(Lambda, List)
```
For example:
```
Squared_Lambda = fun(X) -> X * X end,
Values = [1, 2, 3, 4, 5]
Squared_List = list:map(Squared_Lambda, Values)

%OR

Squared_List = list:map(fun(X) -> X * X end, [1, 2, 3, 4, 5])
```
`lists:map/3`: This function is similar to lists:map/2, but it takes an additional argument which is passed as the second argument to the mapping function:
```
lists:map(Lambda, Lists, Se)
```
### Filter
A `filter` function converts a list into another similar to a map but instead uses a boolean based lambda to determine whether the value should be included in the resulting list. As its name implies, it filters values from one list and creates a new list from the results.
```
filter(Lambda, List)
```
For example:
```
filter(_, []) -> [];
filter(Lambda, [First|Rest]) ->
    case Lambda(First) of
        true ->
            [First | filter(Lambda, Rest)];
        false ->
            filter(Lambda, Rest)
    end.

%OR USING LIST COMPREHENSION

filter(_, []) -> [];
filter(Lambda, List) ->
    [X || X <- List, Lambda(X)].
```
Here we will use a lambda that returns `true` is the value is an even number resulting in a list of only even numbers:
```
Even_List = filter(fun(X) -> X rem 2 end, [1, 2, 3, 4, 5, 6]).
```
### Functor
A functor is a concept and not that originates from category theory and is used in various programming languages, including functional programming languages like Haskell and languages that support functional programming features, such as Erlang.

In general, a functor is a type of object or function that can be mapped over, which means it can apply a function to each element in a data structure (such as a list or a tree) and return a new data structure of the same shape. Functors allow for generic programming, enabling operations to be performed uniformly on different types of data structures without needing to know the specifics of each one.

In functional programming, functors are typically defined by implementing a map function or similar operation that applies a given function to each element of the data structure while preserving its structure.

#### Composition
Composition is a key characteristic of functors. If the list is a functor, then I should be able to show that the following are equivalent given two lambdas λg and λh:
- map applied to a list using `λh(λg(x))` which is the composition of both lambda functions
- map applied to a list using `λg(x)` and then map applied a second time on that result using `λh`

Essentially this means that `map(λg o λh)` is the same as `map(λg) o map(λh)` which would prove if a structure is a functor. For example:<br>

`map(λg o λh)`:
```
G = fun(X) -> X * 2 end,
H = fun(X) -> X * X - 1 end,

G_Compose_H = map(fun(X) -> G(H(X)) end, [1, 2, 3, 4]).
```
`map(λg) o map(λh)`:
```
G = fun(X) -> X * 2 end,
H = fun(X) -> X * X - 1 end,

G_Compose_H = map(G, map(H, [1, 2, 3, 4])),
```
#### Built-in Map Composition Function

### Fold
A `fold` will convert a list to a single value. Like the `map` and `filter` patterns we use a lambda function to define what we want to do with each item of the list. The lambda function is used to combine all the values in the list:
```
fold(_, Acc, []) -> Acc
fold(Lambda, Acc, [First|Rest]) -> fold(Lambda, Lambda(First, Acc), Rest).
```
Note that `Acc` stands for 'accumulator' and will be our final output.

### Fold Right
When you look at the definition of `fold` notice that the list is processed from left to right. We can define a function that goes from right to left called `foldr`. This function will require us to traverse to the end of the list before we can actually call the lambda function. In some cases, folding right instead of folding left will result in different results.
```
foldr(_Lambda, Acc, []) -> Acc;
foldr(Lambda, Acc, [First|Rest]) -> Lambda(First, foldr(Lambda, Acc, Rest)).
```
### Unfold
The fold design pattern is used when you want to consolidate from one larger thing to a smaller thing such as a list to a single value. If we want to go backwards, this is called an unfold. Note that folding and unfolding are not inversely related. For example, if I had a list of numbers [2 5 3 1] and I folded them up using a simple sum function, I would get 11. However, if started with 11 and worked backwards, I could get a possible solution such as [7 1 3 0] which is different from our original list.

When we unfold, we are relying on some initial conditions to generate the next value for our list.
```
unfold(0, _Curr, _Lambda) -> [];
unfold(Count, Curr, Lambda) -> [Curr|unfold(Count-1, Lambda(Curr), Lambda)].
```
### Chaining
### Currying