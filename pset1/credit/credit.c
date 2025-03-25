#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // USER INPUT: ask for card number

    long long number = 0;
    number = get_long("Enter a valid card number:");

    // Variables for credit card number to be kept intact

    long long creditCardNumber = number;
    long long checkSumNumber = number;

    // DIGITS COUNTER: count how many digits in user input

    int counter = 0;
    long long counterNumber = number;
    while (counterNumber > 0)
    {
        counterNumber = counterNumber / 10;
        counter++;
    }

    // CHECKSUM: perfrom caclucations on number to check if it'sa valid card number

    int index = 0;
    int digit = 0;
    int sum = 0;

    while (checkSumNumber > 0)
    {
        if (index % 2 == 1) // Take every second digit
        {
            digit = checkSumNumber % 10;
            digit = digit * 2; // Multiply it by 2

            if (digit > 9) // If result is double digit add each to sum
            {
                sum += digit % 10;
                sum += digit / 10;
            }
            else // If result on multipication is a single digit, add it to sum
            {
                sum += digit;
            }
        }
        else // Take remaining digits and add them to sum
        {
            digit = checkSumNumber % 10;
            sum += digit;
        }

        checkSumNumber = checkSumNumber / 10;
        index++;
    }

    // CHECK SUM LAST DIGIT CHECK - check if last digit is 0 or not

    int lastDigit = sum % 10;

    if (lastDigit != 0)
    { // In not 0, print invalid and finish program
        printf("INVALID\n");
        return 0;
    }

    // EXTRACT FIRST TWO DIGITS and FIRST DIGIT

    long long firstTwoDigits = creditCardNumber;
    long long firstDigit = 0;

    while (firstTwoDigits >= 100)
    {
        firstTwoDigits /= 10;
    }
    firstDigit = firstTwoDigits / 10;

    // CARD CHECKS: checking their first digits and length

    // VISA CHECK

    if ((counter == 13 || counter == 16) && firstDigit == 4)
        printf("VISA\n");

    // MATERCARD CHECK

    else if (counter == 16 && (firstTwoDigits >= 51 && firstTwoDigits <= 55))
        printf("MASTERCARD\n");

    // AMEX CHECK

    else if (counter == 15 && (firstTwoDigits == 34 || firstTwoDigits == 37))
        printf("AMEX\n");

    else
    {
        printf("INVALID\n");
    }
}
