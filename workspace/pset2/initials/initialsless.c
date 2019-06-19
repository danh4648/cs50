#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(void)

{
    string name = get_string();     //user input for name
    if (name != NULL)

    {
        printf("%c", toupper(name[0]));     //print first initial in uppercase
    }

    for(int i = 0, n = strlen(name); i < n; i++)
    if (name[i] == ' ')

    {
        printf("%c", toupper(name[i+1]));       //look for spaces and print the initial after the space
    }
    {
        printf("\n");       //print a new line
    }


}