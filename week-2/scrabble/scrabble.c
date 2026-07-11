#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main()
{
    // take two user input

    string user1 = get_string("Player 1: ");
    string user2 = get_string("Player 2: ");

    int score1 = 0, score2 = 0;
    int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    for (int i = 0, n = strlen(user1); i < n; i++)
    {
        if (isalpha(user1[i]))
        {
            char ch = toupper(user1[i]);
            score1 += points[ch - 65];
        }
        else
        {
            continue;
        }
    }

    for (int i = 0, n = strlen(user2); i < n; i++)
    {
        if (isalpha(user2[i]))
        {
            char ch = toupper(user2[i]);
            score2 += points[ch - 65];
        }
        else
        {
            continue;
        }
    }
    // calculate

    if (score1 > score2)
    {
        printf("Player 1 Wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie\n");
    }
}
