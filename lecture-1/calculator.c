#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // Using `int` instead of `long` would limit the value to approximately 2 billion
    // due to the 4-byte size of `int`, whereas `long` is 8 bytes and can hold much larger values.
    long dollars = 1;
    while(true)
    {
        char c = get_char("Here is $%li. Double ir and give it to the next person? ", dollars);
        if (c == 'y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }
    printf("Here's $%li", dollars);
}
