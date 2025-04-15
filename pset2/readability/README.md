```
# Readability Calculator

This C program calculates the reading grade level of a given text using the Coleman-Liau index. It takes text input from the user and outputs the corresponding grade level.

## Features

-   Prompts the user to input text.
-   Counts the number of letters, words, and sentences in the input text.
-   Calculates the Coleman-Liau index to determine the reading grade level.
-   Outputs the grade level, with special cases for grade levels below 1 and above 16.

## Algorithm Overview

### Input:

The program prompts the user to enter a text string.

### Counting:

-   **Letters:** The program iterates through the text and counts the number of alphabetic characters using the `isalpha()` function.
-   **Words:** The program counts the number of words by counting the spaces in the text and adding 1 (assuming words are separated by spaces).
-   **Sentences:** The program counts the number of sentences by counting the occurrences of '.', '?', or '!'.

### Coleman-Liau Index Calculation:

The program calculates the Coleman-Liau index using the following formula:

```

index = 0.0588 * L - 0.296 * S - 15.8

```

Where:

-   `L` is the average number of letters per 100 words.
-   `S` is the average number of sentences per 100 words.

### Output:

-   If the calculated index is 16 or above, the program outputs "Grade 16+".
-   If the calculated index is less than 1, the program outputs "Before Grade 1".
-   Otherwise, the program outputs "Grade [index]", where [index] is the rounded integer value of the Coleman-Liau index.

## Example

```

Text: Congratulations! Today is your day. You're off to Great Places! You're off and away! Grade 3

Text: The quick brown fox jumps over the lazy dog. Grade 8

Text: It is a truth universally acknowledged, that a single man in possession of a good fortune, must be in want of a wife. ^1^ Grade 10

[

1. www.markedbyteachers.com

](http://www.markedbyteachers.com/international-baccalaureate/world-literature/marriage-rather-than-love-is-the-central-theme-of-pride-and-prejudice-do-you-agree.html)

[

www.markedbyteachers.com

](http://www.markedbyteachers.com/international-baccalaureate/world-literature/marriage-rather-than-love-is-the-central-theme-of-pride-and-prejudice-do-you-agree.html)

```

## What I Learned

-   **String Manipulation:** I used `strlen()` to iterate through the string and `isalpha()` to check for alphabetic characters.
-   **Function Decomposition:** The program is broken down into functions (`count_letters`, `count_words`, `count_sentences`) for better organization and readability.
-   **Type Casting:** I used type casting to convert integers to floats for accurate calculation of the Coleman-Liau index.
-   **Conditional Logic:** I used `if`, `else if`, and `else` statements to handle different grade level outputs.
-   **CS50 Library:** I used the CS50 library's `get_string()` function for safe user input.
-   **Mathematical Calculations:** The program applies a specific formula to calculate the reading grade level.
-   **Rounding:** The program uses the `round()` function to round the calculated index to the nearest integer.
```