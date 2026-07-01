#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // Print first hashes
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        // two hashe equal spaces
        for (int j = 0; j < 2; j++)
        {
            printf(" ");
        }

        // Second Hashes after space

        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}