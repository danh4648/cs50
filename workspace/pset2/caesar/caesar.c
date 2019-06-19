#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)  //check to make sure exactly 2 arguments
    {
        printf("Enter a single non-negative integer please.\n");
        return 1;
    }
    else
    {
        int k = atoi(argv[1]);  //convert string to int
        string p = get_string("plaintext:  "); //get input for the plaintext
        printf("ciphertext: ");

        for (int i = 0, n = strlen(p); i < n; i++)  //iterate through plain text

        if (p[i] >= 'a' && p[i] <= 'z') //if alpha a-z rotate with key
        {
            printf("%c", ((p[i] - 97 + k)%26)+97);  //print cipher character
        }

        else if (p[i] >= 'A' && p[i] <= 'Z')    //if alpha A-Z rotate with key
        {
            printf("%c", ((p[i] - 65 + k)%26)+65);  //print cipher character
        }

        else
        {
            printf("%c", p[i]); //if not an alpha character print plain text character
        }

        printf("\n");
        return 0;
    }
}