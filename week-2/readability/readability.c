#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int words = 0, sentences = 0, characters = 0;
    float L = 0, S = 0;
    int result;

    // input
    string str = get_string("Text: ");

    // calculate characters, words, sentences
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        if (isblank(str[i]))
        {
            words++;
            continue;
        }
        else if (isalpha(str[i]))
        {
            characters++;
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            sentences++;
        }
    }

    // Last word
    words++;

    // calculate L Average number of letters per 100 words
    L = (float) characters / words * 100;

    // calculate S Average number of sentences per 100 words
    S = (float) sentences / words * 100;

    // Coleman-Liau Index
    result = round(0.0588 * L - 0.296 * S - 15.8);

    if (result < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (result >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        switch (result)
        {
            case 1:
                printf("Grade 1\n");
                break;
            case 2:
                printf("Grade 2\n");
                break;
            case 3:
                printf("Grade 3\n");
                break;
            case 4:
                printf("Grade 4\n");
                break;
            case 5:
                printf("Grade 5\n");
                break;
            case 6:
                printf("Grade 6\n");
                break;
            case 7:
                printf("Grade 7\n");
                break;
            case 8:
                printf("Grade 8\n");
                break;
            case 9:
                printf("Grade 9\n");
                break;
            case 10:
                printf("Grade 10\n");
                break;
            case 11:
                printf("Grade 11\n");
                break;
            case 12:
                printf("Grade 12\n");
                break;
            case 13:
                printf("Grade 13\n");
                break;
            case 14:
                printf("Grade 14\n");
                break;
            case 15:
                printf("Grade 15\n");
                break;
        }
    }
}
