Triangle Check Program
======================

This program was created as part of an exercise to practice writing, declaring, and calling functions in C. The task is to determine if three side lengths can form a valid triangle.

### Functionality:

The program prompts the user to enter three side lengths and then checks if those side lengths can form a valid triangle based on the triangle inequality theorem.

### How it works:

-   The user is prompted to input three side lengths.

-   The function `checkTriangle()` is called to check if the given side lengths meet the conditions for a valid triangle:

    -   All side lengths must be positive.

    -   The sum of any two sides must be greater than the third side.

-   The result is printed as either "True" (if the side lengths form a valid triangle) or "False" (if they do not).

### Code Walkthrough:

1.  **Function Declaration:**\
    The `checkTriangle` function is declared at the beginning of the program. This function takes three `float` values as parameters (the sides of the triangle) and returns a boolean value (`true` or `false`).

2.  **User Input:**\
    The program uses the `get_float` function (from the CS50 library) to collect three side lengths from the user.

3.  **Function Call:**\
    The program calls `checkTriangle(x, y, z)` to evaluate whether the input values form a valid triangle.

4.  **Function Definition:**\
    The `checkTriangle` function checks if:

    -   Any side length is less than or equal to zero, returning `false` if so.

    -   The sum of any two side lengths is less than or equal to the third side, returning `false` if so.

    -   Otherwise, the function returns `true`, indicating the sides form a valid triangle.