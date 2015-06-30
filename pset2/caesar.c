/*
    caesar.c
    
    Author: Ruiheng Yin
    
    This is a solution for the caesar problem in pset2 of CS50x.
    This file is a a program that encrypts messages using Caesar's cipher.
    
*/

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc != 2 )
    {
        printf ("Please provide the value of k.\n");
        return 1;
    }
    int k = atoi(argv[1]);
    string s = GetString();
    for(int i = 0; i < strlen(s); i++)
    {
        if ( isupper (s[i]) )
        {
            s[i] = (s[i] - 64 + k) % 26 + 64;
        }
        else if(islower (s[i]))
        {
            s[i] = (s[i] - 96 + k) % 26 + 96;
        }
    }
    for(int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i] );
    }
    printf("\n");
    
}
