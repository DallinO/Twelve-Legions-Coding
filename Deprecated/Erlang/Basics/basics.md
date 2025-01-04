# Lesson 1
### Comments
In Erland we use the `%` symbol for writing comments:
```
% This is a comment
```
### Variables
Like python we do not need to declare the types of our variables when we create them. All we need is a unique name. However in Erland we capitalize our variables while our functions will be lowercase:
```
X = 10,
Y = 2.5,
Name = "John",
Male = true.
```
In Erlang, variables are immutable, meaning once they are bound to a value, they cannot be changed. If you try to reassign a variable that already has a value, you will encounter an error. Note that all but the last line end with a `,`. This is how all lines end, except for the last line which should end with `.`.


### Terminal IO & Atoms
#### **Format Specifiers**
First lets cover some common format specifiers as they are included in some of the various functions used for printing to the terminal/console.<br>
`~n`: This is the newline specifier similar to `\n`.<br>
`~p`: This is a general purpose placeholder for a variable or literal. When you use ~p, Erlang will print the corresponding term using its internal representation.<br>
`~s`: This is specific to printing out strings. When you use ~s, Erlang expects the corresponding argument to be a string, and it will print that string directly.<br>
`~w`: This specifier is similar to ~p, but it suppresses the printing of large data structures. It's useful when printing potentially large terms.<br>
`~f` or `~F`: Used for floating-point numbers. ~f prints floating-point numbers with six decimal places, while ~F prints them with 20 decimal places.<br> 
`~c`: Used for characters. Prints a single character.<br>
`~d`: Used for integers. Prints the integer in base 10 notation.<br>
`~x`: Used for integers. Prints the integer in hexadecimal notation.<br>
`~b`: Used for integers. Prints the integer in binary notation.<br>

#### **Output Functions**
There are several functions that cane be used for writing to the terminal.<br>


`io:write`: This function writes the representation of a single term to the standard output. It doesn't allow for formatting options like io:format/2, but it's useful for quickly outputting values. For example:
```
io:write("Hello there!").
```
*Output*:
```
[72,101,108,108,111,32,116,104,101,114,101,33]ok
```


`io:fwrite`: This function is used to format data and write it to the standard output (usually the console) or to a file. It returns ok if successful. It's part of the io module. For example:
```
io:fwrite("Hello ~s~n", ["there!"]).
```
*Output:*
```
Hello there!
```
Note that we place the literals or variables in `[]` brackets after the quatations and seperated by a comma. Here is how we would print out multiple elements:
```
Fname = "John",
Lname = "Doe",
io:fwrite("Hello ~s~nMy name is ~p ~p.~n", ["there!", Fname, Lname])
```
*Output:*
```
Hello there!
My name is John Doe.
```


`io_lib:fwrite`: This function is similar to `io:fwrite`, but it returns the formatted string instead of writing it to a stream. It's part of the io_lib module. For example:
```
FormattedString = io_lib:fwrite("Hello ~s", ["here!"]),
io:fwrite(FormattedString).
```
*Output:*
```
Hello there!
```


`io:format`: A built-in function in Erlang used to print formatted data to the standard output (console) or to a file. It is similar to io:fwrite in that it allows you to create custom output by specifying a format string and a list of arguments to be substituted into the format string.
```
io:format("Hello there!")
```
*Output:*
```
Hello there!
```


#### **Input Functions**
`io:get_line(Prompt)`: This function reads a line of input from the standard input (keyboard) and returns it as a string. You can provide an optional prompt string as an argument to display to the user before reading input. This is similar to the `input()` funciton in Python. For example:
```
Input = io:get_line("Enter something: "),
io:format("~p~n", [Input]).
```
*Input:*
```
Hello there!
```
*output:*
```
"Hello there!\n"
```
The issue with using `io:get_line()` is that it also reads in the enter command. We can use the `string:trim` function to get rid of it:
```
Input = string:trim(io:get_line("Enter something: ")),
io:format("~p~n", [Input]).
```
*Input:*
```
Hello there!
```
*output:*
```
Hello there!\n
```
There are other string formating functions that we will discuss later.<br>

`io:get_chars`: This function reads a specified number of characters from the standard input and returns them as a string. You can provide an optional prompt string as an argument. For example:
```
Input = io:get_chars("Enter three characters: ", 5),
io:format("~p~n", [Input]).
```
*Input:*
```
Hello there!
```
*output:*
```
"Hello"
```
Notice that our output only shows the first five characters of out input because that is what we specified as the second argument in our funciton. <br>

`io:read`: This function reads a term from the standard input and returns it. It's more general than `io:get_line` because it can read any Erlang term from the input. It returns a tuple `{ok, Term}` if successful therefore we will format our capture variable to read in the tuple. The input must end with a `.` and cannot be capitalized. For example:
```
{ok, Input} = io:read("Enter something: "),
io:format("~p~n", [Input]),
```
*Input:*
```
hello.
```
*output:*
```
hello
```
<br>Without a tuple capture variable:
```
Input = io:read("Enter something: "),
io:format("~p~n", [Input]),
```
*Input:*
```
hello.
```
*output:*
```
{ok,hello}
```

### Arithmetic Operators

<table style="width:100%">
  <tr>
    <th>Operation</th>
    <th>Operator</th>
    <th>Example</th>
    <th>Notes</th>
  </tr>
  <tr>
    <td style="width:20%">Addition</td>
    <td style="width:10%">+</td>
    <td style="width:15%">5 + 3</td>
    <td style="width:55%">Applies to floats & variable stand-ins. Returns an integer if both operands are integers but will return a float when at least one operand is a float.</td>
  </tr>
  <tr>
  <td style="width:20%">Subtraction</td>
    <td style="width:10%">-</td>
    <td style="width:15%">5 - 3</td>
    <td style="width:55%">Applies to floats & variable stand-ins. Returns an integer if both operands are integers but will return a float when at least one operand is a float.</td>
  </tr>
  <tr>
  <td style="width:20%">Multiplication</td>
    <td style="width:10%">*</td>
    <td style="width:15%">6 * 2</td>
    <td style="width:55%">Applies to floats & variable stand-ins. Returns an integer if both operands are integers but will return a float when at least one operand is a float.</td>
  </tr>
  <tr>
  <td style="width:20%">Division</td>
    <td style="width:10%">/</td>
    <td style="width:15%">6 / 3</td>
    <td style="width:55%">Applies to floats & variable stand-ins. Will return a floating point value even if both operands are integers.</td>
  </tr>
  <tr>
  <td style="width:20%">Integer Division (Quotient)</td>
    <td style="width:10%">div</td>
    <td style="width:15%">6 div 3</td>
    <td style="width:55%">Applies to variable stand-ins. Will not work with floats. The operands must be integers.</td>
  </tr>
  <tr>
  <td style="width:20%">Remainder (Modulus)</td>
    <td style="width:10%">rem</td>
    <td style="width:15%">6 rem 3</td>
    <td style="width:55%">Applies to variable stand-ins. Will not work with floats. The operands must be integers.</td>
  </tr>
</table>