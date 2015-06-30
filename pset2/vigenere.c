/*
    vigenere.c
    
    Author: Ruiheng Yin
    
    This is a solution for the vigenere problem in pset2 of CS50x.
    This file is a a program that encrypts messages using Vigenere's cipher.
    
*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Please provide the keyword.\n");
        return 1;
    }
    string keyword = argv[1];
    string s = GetString();
    int keylen = strlen(keyword);
    
    //Accepts only letters as keyword.
    for(int i = 0; i < keylen; i++)
    {
        if (!isalpha(keyword[i]))
        {
            printf("There are illegal letters in the keyword.\n");
            return 1;
        }
    }
    
    int shift = 0;
    int count = 0;
    for(int i = 0; i < strlen(s); i++)
    {   
        if (isalpha(s[i]))
        {
            int j = (i-count) % keylen;
            if islower(keyword[j])
            {
                keyword[j] = toupper(keyword[j]);
                shift = keyword[j] - 65;
            }   
            else if isupper(keyword[j])
            {
                shift = keyword[j] - 65;
            }
               
            if ( isupper (s[i]))
            {
                s[i] = (s[i] - 64 + shift) % 26 + 64;
            }
            else if(islower (s[i]))
            {
                s[i] = (s[i] - 96 + shift) % 26 + 96;
            }
            printf("%c", s[i]);
        }
        else
        {
            printf("%c", s[i]);
            count++;
        }
    }
    printf("\n");
    
}
