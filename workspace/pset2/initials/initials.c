#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(void)

{
    string name = get_string();     //user input for name
    if (name != NULL)
    if (name[0] != ' ')             //if no space, print first initial
    {
        printf("%c", toupper(name[0]));
    }

    for(int i = 0, n = strlen(name); i < n; i++)
    if (name[i] != ' ' && name[i-1] == ' ')
    {
        printf("%c", toupper(name[i])); //print the initial after the spaces
    }

    {
        printf("\n");       //print a new line
    }

}