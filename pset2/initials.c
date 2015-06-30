/*
    initials.c
    
    Author: Ruiheng Yin
    
    This is a solution for the initializing problem in pset2 of CS50x3.
    This file is a a program that prompts a user for their name and then outputs their initials in uppercase.

*/

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


int main(void)

{
    string s = GetString();
    int a = toupper (s[0]);
    int count = 0;
    for (int i=0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
        
    }
    int i=0;
    if (count == 1)
    {
        do 
        {
            i++;
        }
        while (i < strlen(s) && s[i] != ' ' );
        i++;
        printf ("%c", (char) a);
        printf ("%c\n", toupper(s[i]) );
    }
}
