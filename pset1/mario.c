/*
    mario.c
    
    Author: Ruiheng Yin
    
    This file is a solution to the mario half pyramid problem from pset1 of CS50.
    This is a program that recreates a half pyramid using hashes (#) for blocks.

*/

#include <stdio.h>
#include <cs50.h>

int main(void)

{
int n = 0;
    do
    {
        printf ("Please provide the height of the pyamid between 0 and 23:\n");
        n = GetInt();
    }
    while (n <= 0 || n > 23);
    
    for (int row = 0; row < n; row++)
    { 
        for (int column = 0; column < n-row-1; column++)
        {
            printf (" ");        
        }
        for (int column2 = n-row-1; column2 <= n; column2++)
        {
            printf ("#");
        } 
        printf ("\n");
    }
}    
    
