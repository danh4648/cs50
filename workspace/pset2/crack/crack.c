#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <crypt.h>
#define _XOPEN_SOURCE
#include <unistd.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Enter a single hashed password please.\n");
        return 1;
    }

    else
    {
        hash = argv[1];
        char salt[] = "50";
        string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

        for (int i = 0; i < 52; i++)
        {

        }

}