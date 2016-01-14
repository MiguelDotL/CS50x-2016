/*
1234567## - 01
123456### - 02
12345#### - 03
1234##### - 04
123###### - 05
12####### - 06
1######## - 07
######### - 08

spaces = height - row;
hashes = row + 1;
*/

#include <cs50.h>
#include <stdio.h>

//get user input
int main(void) {
    printf("Please input the height of the half-pyramid.\n");
    int height;
    do{
        printf("Height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    
    //execute rows-------------------------------------------------
    for (int row = 0; row < height; row++) {
        //execute spaces-------------------------------------------
        for(int spaces = 1; spaces < height - row; spaces++) {
            printf(" ");
        }
        //execute hashes, then return------------------------------
        for (int hash = 0; hash <= row + 1; hash++) {
            if (hash < row + 1) {
                printf("#");
            }
            else {
                printf("#\n");
            }
        }
    }        
}
   
       



