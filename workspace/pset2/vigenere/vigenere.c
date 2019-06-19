#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Enter one keyword composed of only alphabetical letters please.\n");
        return 1;
    }

    string k = argv[1];
    int kl = strlen(k);
    for (int i=0; i < kl; i++)
    {
        if (isalpha(k[i]) == false)
        {
            printf("Enter one keyword composed of only alphabetical letters please.\n");
            return 1;
        }
    }

    string p = get_string("plaintext:  ");
    printf("ciphertext: ");


    for (int i = 0, j = 0, n = strlen(p); i < n; i++)
    {
        int a = tolower(k[j%kl]) - 97;

        {
            if(isupper(p[i]))
            {
                printf("%c", ((p[i] - 65 + a)%26) + 65);
                j++;
            }

            else if(islower(p[i]))
            {
                printf("%c", ((p[i] - 97 + a)%26) + 97);
                j++;
            }

            else
            {
                printf("%c", p[i]);
            }
        }


    }

    printf("\n");
    return 0;
}