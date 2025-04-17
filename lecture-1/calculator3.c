#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%.50f\n", (float) x / y);
}

// Using 50 decimal places in the printf statement to show the float-point imprecision, 
// because float uses only 4 bytes (32bits) and has a limited precision of about 7 decimal places.