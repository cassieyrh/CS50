/*
    greedy.c
    
    Author: Ruiheng Yin
    
    This file is a solution to the greedy algorithm problem from pset1 of CS50.

*/

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n = 0;
    
    do 
    {
        printf ("How much change is owed?\n");
        n = GetFloat ();
    }
    while (n<=0);
    
    int cent = round (n*100);
    
    int coin = 0;
    while (cent >= 25)
    { 
        cent -= 25;
        coin++; 
    }
    while (cent >= 10)
    {
        cent -= 10;
        coin++;
    }
    while (cent >= 5)
    {
        cent -= 5;
        coin++;
    }
    while (cent >= 1)
    {
        cent -= 1;
        coin++;
    }
    printf ("%i\n", coin);
