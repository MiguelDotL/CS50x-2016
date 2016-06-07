#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./asciimath key\n");
        return 1;
    }
    
    //key == argv[1]
    int key = atoi(argv[1]);
    
    int letter = 'A';

    printf("\nCalculating: %c + %d...\n", letter, key);
    
    int result = (letter + key);
    
    printf("The ASCII value of %c is %d.\n\n", result, result);
    
    
}

