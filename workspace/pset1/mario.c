#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int height;

    do

    height = get_int("Height: ");

    while (height > 23 || height < 0);

    for (int i = 1; i < height + 1; i++)
    {
        for (int s = 0; s < height - i; s++)
        {
            printf(" ");
        }

        for (int h = 0; h < i; h++)
        {
            printf("#");
        }
        printf("  ");
        for (int h = 0; h < i; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}

