#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    float change;
    int c;
    int total = 0;

    {
        printf("O Hai! ");
    }

    do

    {
        printf("How much change is owed\n");
        change = get_float();
    }

    while (change < 0);

    c = round(change * 100);

    while (c >= 25)
    {
        c = c - 25;
        total ++;
    }

    while (c >= 10)
    {
        c = c - 10;
        total ++;
    }

    while (c >= 5)
    {
        c = c - 5;
        total ++;
    }

    while (c >= 1)
    {
        c = c - 1;
        total ++;
    }

    {
        printf("%i\n", total);
    }
}

