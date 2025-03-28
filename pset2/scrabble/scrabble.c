#include <cs50.h>
#include <stdio.h>
#include <string.h>

// DECLARE ARRAYS

char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int scores[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// DECLARE FUNCTION FOR COUNTING SCORES

int scoresCounter(string word);

int main(void)
{

    // GET INPUT FROM USER

    string word1 = get_string("Player 1 ");
    string word2 = get_string("Player 2 ");

    int score1 = scoresCounter(word1);

    // printf("Score 1 : %i\n", score1);

    int score2 = scoresCounter(word2);

    // printf("Score 2 : %i\n", score2);

    if (score1 > score2)
    {
        printf("Player 1 wins\n");
    }
    else if (score1 < score2)

    {
        printf("Player 2 wins\n");
    }

    else
    {
        printf("Tie\n");
    }
}

// DEFINE FUNCION TO ITERATE OVER USERS INPUTS TO GET SCORES

int scoresCounter(string word)
{
    int score = 0;

    for (int wordIndex = 0; wordIndex < strlen(word); wordIndex++)
    {

        // Check if letter is not capital. If yes, convert to small

        if (word[wordIndex] > 64 && word[wordIndex] < 91)

        {
            word[wordIndex] += 32;
        }

        for (int letterIndex = 0; letterIndex < 26; letterIndex++)
        {
            if (word[wordIndex] == letters[letterIndex])
            {
                score += scores[letterIndex];
            }
        }
    }

    return score;
}
