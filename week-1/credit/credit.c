#include <cs50.h>
#include <stdio.h>

bool isValid(long creditNO);

int main()
{

    long credit_no;
    int digits = 0;
    do
    {
        credit_no = get_long("Enter Credit Card No: ");
    } while (credit_no < 0);

    long temp_credit_no = credit_no;

    while (temp_credit_no > 0)
    {
        digits++;
        temp_credit_no = temp_credit_no / 10;
    }

    if (!isValid(credit_no) || (digits != 13 && digits != 15 && digits != 16))
    {
        printf("INVALID\n");
        return 0;
    }
    else
    {
        int startingNumber;
        temp_credit_no = credit_no;

        while (temp_credit_no >= 100)
        {
            temp_credit_no /= 10;
        }

        startingNumber = temp_credit_no;

        if ((digits == 13 || digits == 16) && (startingNumber / 10 == 4))
        {
            printf("VISA\n");
        }
        else if (digits == 15 && (startingNumber == 34 || startingNumber == 37))
        {
            printf("AMEX\n");
        }
        else if (digits == 16 &&
                 (startingNumber == 51 || startingNumber == 52 || startingNumber == 53 ||
                  startingNumber == 54 || startingNumber == 55))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
}

//==============================================================================================================
bool isValid(long creditNO)
{

    int sum = 0;
    bool alternate = false;

    while (creditNO > 0)
    {
        int digit = creditNO % 10;
        if (alternate)
        {
            digit *= 2;
            if (digit > 9)
            {
                int lastDigit = digit % 10;
                int firstDigit = digit / 10;
                digit = lastDigit + firstDigit;
            }
        }
        sum += digit;
        alternate = !alternate;
        creditNO /= 10;
    }

    return (sum % 10 == 0);
}