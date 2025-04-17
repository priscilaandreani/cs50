#include <stdio.h>

void print_row(int n);

int main(void)
{
    const int n = 3;
    for (int row = 0; row < n; row++)
    {
        print_row(n);
    }
}

void print_row(int n)
{
    for (int col = 0; col < n; col++)
    {
        printf("#");
    }
    printf("\n");
}
