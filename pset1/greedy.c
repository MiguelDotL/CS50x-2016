#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {

    //ask user how much change is owed
    float changeOwed;
    //validate input
    do {
        printf("How much change is needed?\nChange Owed: $");
        changeOwed = GetFloat();
    }       
    while(changeOwed <= 0.0);
    
    //convert $ to ¢ with 'round();'
    int centsLeft = round(changeOwed * 100);

    int qCount = 0, dCount = 0, nCount = 0;
    
    //quarters
    qCount = centsLeft / 25;
       /* if (qCount == 1) {
            printf("%i quarter\n", qCount);
        }
        else {
            printf("%i quarters\n", qCount);
        }*/
    centsLeft %= 25;
    
    //dimes
    dCount = centsLeft / 10;
       /* if (dCount == 1) {
            printf("%i dime\n", dCount);
        }
        else {
            printf("%i dimes\n", dCount);
        }*/
    centsLeft %= 10;
    
    //nickles
    nCount = centsLeft / 5;
        /*if (nCount == 1) {
            printf("%i nickle\n", nCount);
        }
        else {
            printf("%i nickles\n", nCount);
        }*/
    centsLeft %= 5;
    
    //pennies
    /*if (centsLeft == 1) {
        printf("%i penny\n", centsLeft);
    }
    else {
        printf("%i pennies\n", centsLeft);
    }*/
    
    //do Total
    int totalCoins = qCount + dCount + nCount + centsLeft;
    // printf("%i coins in total.\n", totalCoins);
    printf("%i\n", totalCoins);

}