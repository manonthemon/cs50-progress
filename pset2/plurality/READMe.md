```
Plurality Vote Counter
======================

Overview
--------

This project is part of **CS50**, Harvard's Introduction to Computer Science course. It simulates a plurality election, taking a list of candidates as command-line arguments and then processing votes to determine the winner(s).

What I Learned
--------------

Through this project, I learned about:

-   **Working with command-line arguments**: Understanding how to access and utilize arguments passed to the `main` function when the program is executed from the terminal.
-   **Defining and using structs**: Creating custom data types using the `struct` keyword to group related data together. In this project, the `candidate` struct bundles a candidate's `name` (a string) and their `votes` (an integer).
-   **Using arrays of structs**: Implementing arrays to efficiently manage collections of these custom `candidate` structs, allowing for easy iteration and access to candidate information.
-   **String comparison**: Recognizing the importance of using the `strcmp()` function from `string.h` for accurate comparison of C-style strings.
-   **Implementing a voting function**: Designing a function to encapsulate the logic for processing a single vote, including validating the vote against the list of candidates and updating their vote counts.
-   **Determining and printing the winner(s)**: Developing an algorithm to identify the candidate(s) with the highest number of votes and handling potential ties.

How It Works
------------

1.  The program takes the names of the candidates as command-line arguments when it is executed.
2.  It prompts the user for the number of voters.
3.  For each voter, the program asks for their vote (the name of a candidate).
4.  The `vote()` function checks if the entered name matches any of the candidates. If it does, the vote count for that candidate is incremented. Invalid votes are reported.
5.  After all votes are cast, the `print_winner()` function identifies the candidate(s) with the highest number of votes and prints their name(s). In case of a tie, all candidates with the maximum votes are declared winners.

Compilation and Execution
-------------------------

Since this project uses CS50's `get_string()` and `get_int()` functions, it requires linking with the CS50 library.

### Run the program with candidate names as arguments:

Bash

./plurality Alice Bob Charlie

The program will then prompt you for the number of voters and their votes.

Example Run
-----------

Usage: plurality [candidate ...]
./plurality Alice Bob
Number of voters: 3
Vote: Alice
Vote: Bob
Vote: Alice
Alice

./plurality John Jane
Number of voters: 4
Vote: John
Vote: Jane
Vote: John
Vote: Jane
John
Jane

```