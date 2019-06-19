#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int height;

    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (height>23 || height<0);

    for (int i=0; i<height; i++)
    {
        for (int s=0; s<height-i-1; s++)
        {
            printf(" ");
        }

        for (int h=0; h<i+2; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}