#include <cs50.h>
#include <stdio.h>
#include <string.h>    //strlen();
#include <ctype.h>     //isalpha(), isupper(), islower(), toupper();

//GET KEY STRING FROM USER
int main(int argc, string argv[])
{
    //argc MUST = 2 NO MORE, NO LESS.
    if (argc != 2)
    {
        printf("Program only accepts alpha strings. Please try again.\nUsage: \"./vigenere key\"\n");
        return 1;
    }
    string key = argv[1];
    int key_len = strlen(key) - 1;
    int key_count = 0;

    //isalpha() MUST = true

//GET phrase_in
    string phrase_in = GetString();
    if (phrase_in != NULL)
    {
        
        //ENCIPHER PLAIN TEXT
        int phrase_out;
        for (int i = 0, n = strlen(phrase_in); i < n; i++)
        {
            // GO TO NEXT LETTER IN key, ONLY IF isalpha(phrase_in[i]);
            if (isalpha(phrase_in[i]))
                {
                    //HANDLE UPPER & LOWER CASE SEPARATELY
                    if (isupper(phrase_in[i]))
                    {
                        phrase_out = (phrase_in[i] + (key[i]) - 'A') % 26 + 'A';
                        printf("%c", phrase_out);
                    }
                    else
                    {
                        phrase_out = (phrase_in[i] + key[i] - 'a') % 26 + 'a';
                        printf("%c", phrase_out);
                    }
                
                key_count++;
                    
                //PRINT phrase_out
                }
                else
                {
                    printf("%c", phrase_in[i]);
                }
            } 
            printf("\n");
        }
   }
    

    
    //KEEP TRACK OF POSITION IN phrase_in AND  POSITION IN key
