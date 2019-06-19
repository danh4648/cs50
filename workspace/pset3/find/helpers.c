/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm

    int first = 0;
    int last = n - 1;
    int middle = (first + last) / 2;
    int end = 0;
    int start = 0;

    while (first <= last)
    {
        if (values[middle] == value)
        {
            return true;
        }

        else if (value < values[middle])
        {
            end = middle - 1;
            middle = (start + end) / 2;
        }

        else if (value > values[middle])
        {
            end = middle + 1;
            middle = (start + end) / 2;
        }

    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j=0; j < n-i-1; j++)
            if (values[j] > values[j+1])
            {
                int temp = values[j];
                values[j] = values[j+1];
                values[j+1] = temp;
            }
    return;
}
