Mario Pyramid Generator
=======================

This is a C program that generates a pyramid, inspired by the structure and symmetry of Mario's iconic levels. The program asks the user for a height and constructs a pyramid with two halves, resembling a classic Mario scene with a gap in the middle.

Features
--------

-   Prompts the user for the height of the pyramid.

-   Generates a pyramid with two halves (left and right) with a gap in the middle, making it resemble Mario's world.

-   Ensures the pyramid height is between 1 and 8, making it the perfect size for Mario's adventures.

Mario's Pyramid Adventure
-------------------------

### Input Validation:

The program asks you to input the height of the pyramid, but Mario only accepts valid inputs! The height must be between 1 and 8, and if it's not, you'll be asked again to make sure the pyramid is just right.

### Outer Loop for Rows:

Each row in the pyramid is like a level in Mario's world, with the program working its way upwards, constructing the pyramid from the ground up.

### Inner Loops for Pyramid Construction:

Just like Mario carefully places his blocks, the program ensures the pyramid is symmetrical. It handles spaces, left-hand side blocks, the gap in the middle, and the right-hand side blocks.

-   **Spaces**: The program prints spaces on the left to align the pyramid correctly to the right, like Mario aligning his jumps.

-   **Left Side**: Prints blocks (`#`) for the left half of the pyramid.

-   **Middle Gap**: A small gap in the middle, just like the space Mario jumps through!

-   **Right Side**: Prints blocks (`#`) for the right half of the pyramid.

### Output:

The program will print a neat pyramid with blocks on both sides and a gap in the middle, ready for Mario to jump!