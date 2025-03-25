#include <cs50.h>
#include <stdio.h>

int main(void)

// Take input from user, make sure it's within the range
{
    int height;
    do
    {
        height = get_int("How high should the priamid be? ");
    }

    while (height < 1 || height > 8);

    // Outer loop making rows
    for (int row = 0; row < height; row++)
    {
        { // Inner loop printing spaces (to align pyramid to the right)
            for (int j = height - 1; j > row; j--)

                printf(" ");

            // Inner loop printing left hand side of pyramid
            for (int k = 0; k <= row; k++)

                printf("#");

            // Middle space
            printf("  ");

            // Inner loop printing right hand side of pyramid
            for (int k = 0; k <= row; k++)

                printf("#");
        }
        printf("\n");
    }
}
