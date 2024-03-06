- module(test).
- export([lesson_1/0, input_test/0]).

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Lesson 1
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
output_test() ->
    io:write("Hello there!"),
    io:fwrite("Hello, ~s~n", ["there!"]),
    Fname = "John",
    Lname = "Doe",
    io:fwrite("Hello, ~s~nMy name is ~p ~p~n.", ["there!", Fname, Lname]),
    FormattedString = io_lib:fwrite("Hello ~s", ["here!"]),
    io:fwrite(FormattedString),
    ok.

input_test() ->
    % Input1 = io:get_line("Enter something: "),
    % io:format("~p~n", [Input1]),
    % InputWithNewline = io:get_line("Enter something: "),
    % InputWithoutNewLine = string:strip(InputWithNewline, right, $\n),
    % io:format("~s~n", [InputWithoutNewLine]),
    % Input2 = string:trim(io:get_line("Enter something: ")),
    % io:format("~p~n", [Input2]),
    % Input3 = io:get_chars("Enter four characters: ", 5),
    % io:format("~p~n", [Input3]),
    {ok, Input4} = io:read("Enter something: "),
    io:format("~p~n", [Input4]),
    ok.

lesson_1() -> 
    % Output Functions
    output_test(),

    % Input functions.
    input_test(),
    ok.