#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{

    // validate cmd line arg
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);
    int cipherTxt;

    key %= 26;

    // take input from the user plain text
    string plainTxt = get_string("Plaintext: ");

    printf("Ciphertext: ");
    for (int i = 0, n = strlen(plainTxt); i < n; i++)
    {
        if (isalpha(plainTxt[i]))
        {
            if (isupper(plainTxt[i]))
            {
                cipherTxt = plainTxt[i] + key;
                if (cipherTxt > 'Z')
                {
                    printf("%c", cipherTxt - 26);
                }
                else
                {
                    printf("%c", cipherTxt);
                }
            }
            else
            {
                cipherTxt = plainTxt[i] + key;
                if (cipherTxt > 'z')
                {
                    printf("%c", cipherTxt - 26);
                }
                else
                {
                    printf("%c", cipherTxt);
                }
            }
        }
        else
        {
            printf("%c", plainTxt[i]);
        }
    }
    printf("\n");

    // print encrypted ciphertext
}
