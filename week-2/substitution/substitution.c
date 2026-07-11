#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // validate the cmd line arg, no duplicates and should only be alphabetic and 26 alpa

    if (argc != 2)
    {
        printf("Enter Key!\n");
        return 1;
    }

    if (strlen(argv[1]) != 26)
    {
        printf("Try Entering 26 Alphabetical Key!\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isalpha(argv[1][i]) == 0)
        {
            printf("No digits allowed!\n");
            return 1;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (toupper(argv[1][i]) == toupper(argv[1][j]))
            {
                printf("Key cannot contain duplicate alpabets\n");
                return 1;
            }
        }
    }

    string key = argv[1];

    // inputing
    string plainTxt = get_string("plaintext: ");

    // output
    printf("ciphertext: ");

    for (int i = 0, n = strlen(plainTxt); i < n; i++)
    {
        if (isalpha(plainTxt[i]))
        {
            if (isupper(plainTxt[i]))
            {
                printf("%c", toupper(key[plainTxt[i] - 'A']));
            }
            else
            {
                printf("%c", tolower(key[plainTxt[i] - 'a']));
            }
        }
        else
        {
            printf("%c", plainTxt[i]);
        }
    }
    printf("\n");
}
