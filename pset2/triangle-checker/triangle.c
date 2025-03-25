#include <cs50.h>
#include <stdio.h>

// Declaire function

bool checkTriangle(float x, float y, float z);

int main(void)

{

    float x = get_float("Enter side 1: ");
    float y = get_float("Enter side 2: ");
    float z = get_float("Enter side 3: ");

    // Call funcion

    if (checkTriangle(x, y, z))
    {
        printf("True\n");
    }

    else
    {
        printf("False\n");
    }
}

// Define function

bool checkTriangle(float x, float y, float z)
{
    if (x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }

    else if ((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        return false;
    }
    else
    {
        return true;
    }
}
