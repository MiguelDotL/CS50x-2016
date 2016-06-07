#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    printf("Please input string: ");
    string s = GetString();
    printf("\n");
    
    int count = 0;
    
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z')
        ||  (s[i] >= 'a' && s[i] <= 'z'))
        {
            if (count % 2 == 0)
                s[i] &= ~('a' - 'A');
            else
                s[i] |= ('a' - 'A');
            count++;    
                
            /*if (count % 2 == 0)
                printf("%c", toupper(s[i]))
            else if (count % 2 == 1)
                printf("%c", tolower(s[i]))
            else
                printf("%c", s[i])*/
        }
    }
    
    printf("%s\n", s);
}