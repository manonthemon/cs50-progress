#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// Declare funtions
int check_letter(string key);
int check_repeat(string key);
int convert(string plaintext);

int main(int argc, string argv[])
{
    // check if user provides one argument
    if (argc != 2)
    {

        printf("Provide one argument\n");

        return 1;
    }

    // Assign user input to a variable
    string key = argv[1];

    // Assign key length to variable
    int keyLength = strlen(key);

    // check if user key is the right length

    if (keyLength != 26)
    {
        printf("Key must contain 26 characters\n");

        return 1;
    }

    // call fucntion checking for letters. If they return errors, end program
    check_letter(key);

    if (check_letter(key) == 1)
    {
        return 1;
    }

    check_repeat(key);

    if (check_repeat(key) == 1)
    {
        return 1;
    }

    // Get text from user
    string plaintext = get_string("plaintext: ");

    // Declare ciphertext as an array of the same length as plaintext
    char ciphertext[strlen(plaintext)];

    // Loop over plaintext and convert it to ciphertext
    for (int k = 0; k < strlen(plaintext); k++)
    {
        // Copy over non-alphabetical characters
        if (!isalpha(plaintext[k]))
        {
            ciphertext[k] = plaintext[k];
        }

        // Convert upper case characters to ciphers
        else if (isupper(plaintext[k]))
        {

            int position = plaintext[k] - 65;

            ciphertext[k] = toupper(key[position]);
        }
        // Convert lower case characters to ciphers
        else
        {
            int position = plaintext[k] - 97;

            ciphertext[k] = tolower(key[position]);
        }
    }

    // Add \0 at the end of ciphertext array and print ciphertext
    ciphertext[strlen(plaintext)] = '\0';

    printf("ciphertext: %s\n", ciphertext);

    return 0;
}

// Function to check if key has letters only

int check_letter(string key)
{
    for (int counter = 0; counter < strlen(key); counter++) // loop over key
        if (!isalpha(key[counter])) // check if character is a letter. If not:
        {
            printf("Key must contain letters only\n");
            return 1;
        }

    return 0;
}

// Function to check if key has repeating letters

int check_repeat(string key)
{
    for (int i = 0; i < strlen(key); i++) // loop over key

    {
        for (int j = i + 1; j < strlen(key); j++)
        {
            if (tolower(key[i]) == tolower(key[j]))
            {
                printf("Key must not contain repeating characters\n");
                return 1;
            }
        }
    }

    return 0;
}
