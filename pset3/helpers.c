/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 
 Binary search and Bubble sort algorithms were implemented.
 
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
    int low = 0;
    int high = (n-1);
    int middle;
    while (values[low] <= values[high])
    {
        middle = (low + high)/2;
        if (values[middle] < value)
        {
            low = middle + 1;
        }
        else if (values[middle] == value)
        {
            return true;
        }
        else
        {
            high = middle - 1;
        }   
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (values[j] > values[j+1])
            {
                int temp = values[j];
                values[j] = values[j+1];
                values[j+1] = temp;
            }
        }
        
    }
}
