#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int n;

    do
    {
    printf("Minutes: ");
    n = get_int();
    }

    while (n<1);

{
    printf("Bottles: %i\n", n*12);
}
}
