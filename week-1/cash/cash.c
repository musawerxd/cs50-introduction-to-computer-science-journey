#include <cs50.h>
#include <stdio.h>

int main()
{

    int moneyOwned;

    // input
    do
    {

        moneyOwned = get_int("Change owned: ");
    } while (moneyOwned < 1);

    // toatl coins to return
    int totalCoins = 0;

    // logic
    if (moneyOwned >= 25)
    {
        int total_25 = moneyOwned / 25;
        moneyOwned = moneyOwned - (total_25 * 25);
        totalCoins += total_25;
    }
    if (moneyOwned >= 10)
    {
        int total_10 = moneyOwned / 10;
        moneyOwned = moneyOwned - (total_10 * 10);
        totalCoins += total_10;
    }
    if (moneyOwned >= 5)
    {
        int total_5 = moneyOwned / 5;
        moneyOwned = moneyOwned - (total_5 * 5);
        totalCoins += total_5;
    }
    if (moneyOwned >= 1)
    {
        int total_1 = moneyOwned / 1;
        moneyOwned = moneyOwned - (total_1 * 1);
        totalCoins += total_1;
    }

    printf("%i\n", totalCoins);
}