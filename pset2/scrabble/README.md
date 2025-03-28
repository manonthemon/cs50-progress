Scrabble Score Calculator
=========================

Overview
--------

This project is part of **CS50**, Harvard's Introduction to Computer Science course. The program is a simple Scrabble score calculator that compares two players' word scores and determines the winner.

What I Practiced
----------------

Through this project, I practiced:

-   **Defining and using functions**: Created a function (`scoresCounter`) to calculate the word score.

-   **Working with arrays**: Used arrays to store letter values and map scores to letters.

-   **Using external libraries**: Utilized `string.h` for strong operations.

-   **String manipulation**: Iterated over strings to compute word scores and handled case sensitivity.

How It Works
------------

1.  The program prompts **Player 1** and **Player 2** to input words.

2.  It calculates the score of each word based on predefined letter values (Scrabble scoring system).

3.  The program determines and prints the winner (or a tie if scores are equal).

Compilation and Execution
-------------------------

Since this project uses CS50's `get_string()` function, it requires linking with the CS50 library.

### Compile the code:

```
gcc scrabble.c -o scrabble -lcs50

```

### Run the program:

```
./scrabble

```

Example Run
-----------

```
Player 1: hello
Player 2: world
Player 1 wins

```

Notes
-----

-   The program automatically converts uppercase letters to lowercase to match the scoring array.

-   It only accounts for alphabetical characters (ignoring special characters or numbers).

This project helped reinforce my understanding of fundamental C programming concepts, especially functions, arrays, and library usage.