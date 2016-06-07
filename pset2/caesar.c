#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>    //atoi();
#include <string.h>    //strlen();
#include <ctype.h>     //isalpha(), isupper(), islower(), toupper();

//GET CIPHER KEY
int main(int argc, string argv[])
{
    //Sanity check ? argc = 2 :
    if (argc != 2)
    {
        printf("Program only accepts non-negative ints. Please try again.\nUsage: \"./caesar key\"\n");
        return 1;
    }
    int key = atoi(argv[1]);

    //GET PLAIN TEXT
    //user prompt below removed in order to pass check50
    //printf("Please type a mesage to be enciphered:\n");
    string input = GetString();
    if (input != NULL)
    {
        //ENCIPHER PLAIN TEXT
        int output;
        for (int i = 0, n = strlen(input); i < n; i++)
        {
            if (isalpha(input[i]))
            {
                if (isupper(input[i]))
                {
                    output = (input[i] + key - 'A') % 26 + 'A';
                    printf("%c", output);
                }
                else
                {
                    output = (input[i] + key - 'a') % 26 + 'a';
                    printf("%c", output);
                }
                
            //PRINT CIPHER TEXT
            }
            else
            {
                printf("%c", input[i]);
            }
            //printf("%c", output);
        } 
        printf("\n");
    }
}