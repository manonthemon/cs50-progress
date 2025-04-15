#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{

    // Prompt user for text

    string text = get_string("Text: ");

    // Count letters, words and sentences with functions

    int letters = 0;
    int words = 0;
    int sentences = 0;

    letters = (count_letters(text));

    words = count_words(text);

    sentences = count_sentences(text);

    // Caluclate and print index

    float L = ((float) letters / (float) words) * 100;
    float S = ((float) sentences / (float) words) * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if ((index >= 16))
    {
        printf("Grade 16+\n");
    }

    else if ((index < 1))
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf(("Grade %i\n"), index);
    }
}

// letters counting futnion

int count_letters(string text)
{
    int letters = 0;

    for (int counter = 0; counter < strlen(text); counter++)
    {
        if (isalpha(text[counter]))
        {
            letters += 1;
        }
    }

    return letters;
}

// Function to count words

int count_words(string text)
{
    int words = 1;

    for (int counter = 0; counter < strlen(text); counter++)
    {
        if (text[counter] == ' ')
            words += 1;
    }

    return words;
}

// Function to count sentences

int count_sentences(string text)
{
    int sentences = 0;

    for (int counter = 0; counter < strlen(text); counter++)
    {
        if (text[counter] == '.' || text[counter] == '?' || text[counter] == '!')

            sentences += 1;
    }

    return sentences;
}
