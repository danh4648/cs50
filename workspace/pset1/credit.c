#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    long long card;
    long long digit;
    int sum;

    card = get_long_long("Number: ");

    for (long long i = 10; i < pow(10,16); i = i * 100)

    {
        digit = (card / i) % 10;
        digit = digit * 2;
        if (digit >= 10)

        {
            digit = (digit % 10) +1;
        }

        sum = (sum + digit);
    }

    for (long long i = 100; i < pow(10,16);i = i * 100)
    {
        digit = (card / i) % 10;
        sum = sum + digit;
    }
        sum = sum + (card % 10);

    sum = sum % 10;
    if (sum != 0)
    {
        printf("INVALID\n");
    }
    else if (card >= 340000000000000 && card <= 349999999999999)
    {
        printf("AMEX\n");
    }
    else if (card >= 370000000000000 && card <= 379999999999999)
    {
        printf("AMEX\n");
    }
    else if (card >= 5100000000000000 && card <= 5599999999999999)
    {
        printf("MASTERCARD\n");
    }
    else if (card >= 4000000000000 && card <= 4999999999999)
    {
        printf("VISA\n");
    }
    else if (card >= 4000000000000000 && card <= 4999999999999999)
    {
        printf("VISA\n");
    }

}