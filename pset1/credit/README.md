# Credit Card Validator

This is a C program that validates credit card numbers using the Luhn Algorithm. It checks whether the card number is valid and identifies the card type (VISA, MasterCard, AMEX) based on the length and starting digits.

## Features

- Accepts a credit card number input from the user.

- Validates the credit card number using the Luhn algorithm.

- Identifies the card type (VISA, MasterCard, AMEX) based on the first digits and length of the card number.

- Prints "INVALID" if the credit card number is not valid or if the card type cannot be identified.

## Algorithm Overview

### Input Validation:

The program asks the user to input a credit card number.

### Luhn Algorithm:

The Luhn algorithm is applied to the credit card number to check for validity. The checksum of the number is calculated by adding every second digit from the right (multiplied by 2), and adding the rest of the digits directly to the sum. If the checksum is divisible by 10, the card number is considered valid.

### Card Type Identification:

The program checks the first few digits and the length of the card number to identify the card type:

- **VISA**: Card number starts with 4 and is 13 or 16 digits long.

- **MasterCard**: Card number starts with any number between 51 and 55 and is 16 digits long.

- **AMEX**: Card number starts with 34 or 37 and is 15 digits long.

### Output:

The program outputs the card type if the number is valid, or "INVALID" if it is not.

## Example

Enter a valid card number: 4111111111111111 VISA

Enter a valid card number: 5105105105105100 MASTERCARD

Enter a valid card number: 378282246310005 AMEX

Enter a valid card number: 1234567890123456 INVALID


### What I Learned

-   **Luhn Algorithm**: I implemented the Luhn algorithm, which is widely used for credit card number validation. It involved understanding how to manipulate digits, calculate checksums, and check conditions for validity.

-   **Loops and Conditions**: I strengthened my knowledge of loops, particularly while loops, to count the digits in the card number, and used conditional statements to verify whether the card is valid and identify its type.

-   **String Manipulation**: The program required efficient string handling, such as extracting specific digits and working with large numbers that are beyond the size of standard data types.

-   **CS50 Library**: I used the CS50 library's `get_long()` function to take input safely from the user, which improved my ability to interact with user input in C.

-   **Problem Solving**: This project improved my ability to break down a problem into smaller steps and systematically apply algorithms to solve it.