```
# Substitution Cipher Program

This C program implements a substitution cipher, encrypting plaintext provided by the user based on a 26-letter key given as a command-line argument.

## Features

-   Takes a 26-letter key as a command-line argument.
-   Validates the key to ensure it contains exactly 26 unique alphabetic characters.
-   Prompts the user to input plaintext.
-   Encrypts the plaintext by substituting each letter with the corresponding letter from the key, maintaining case.
-   Preserves non-alphabetic characters in the ciphertext.
-   Outputs the resulting ciphertext.

## Algorithm Overview

### Input:

1.  **Key (Command-Line Argument):** The program expects a single command-line argument consisting of exactly 26 unique alphabetic characters.
2.  **Plaintext (User Input):** The program prompts the user to enter the text they wish to encrypt.

### Key Validation:

The program performs the following checks on the provided key:

-   **Argument Count:** Ensures that exactly one command-line argument (the key) is provided.
-   **Key Length:** Verifies that the key is exactly 26 characters long.
-   **Alphabetic Characters:** Checks that all characters in the key are alphabetic letters.
-   **Unique Characters:** Ensures that all 26 letters in the key are unique (no repetitions).

If any of these checks fail, the program prints an error message and exits.

### Encryption:

The program iterates through each character of the plaintext:

-   **Uppercase Letters:** If a character is an uppercase letter, its position in the alphabet (A=0, B=1, ..., Z=25) is determined. The corresponding uppercase letter from the key at that position is then used as the ciphertext character.
-   **Lowercase Letters:** If a character is a lowercase letter, its position in the alphabet (a=0, b=1, ..., z=25) is determined. The corresponding lowercase letter from the key at that position is then used as the ciphertext character.
-   **Non-Alphabetic Characters:** If a character is not an alphabetic letter, it is kept unchanged in the ciphertext.

### Output:

The program prints the resulting ciphertext to the console.


What I Learned
--------------

-   **Command-Line Arguments:** I learned how to access and validate command-line arguments using `argc` and `argv`.
-   **String Manipulation:** I used `strlen()` to determine string length and accessed individual characters using array indexing.
-   **Character Classification:** I utilized functions like `isalpha()`, `isupper()`, and `islower()` from the `ctype.h` library to analyze characters.
-   **Conditional Logic:** I employed `if`, `else if`, and `else` statements to handle different cases during key validation and encryption.
-   **Function Decomposition:** The program is organized into functions (`check_letter`, `check_repeat`) to improve code modularity and readability.
-   **Mapping and Substitution:** I implemented a mapping based on the provided key to perform the substitution cipher.
-   **Case Preservation:** I ensured that the case of the original plaintext letters was maintained in the ciphertext.