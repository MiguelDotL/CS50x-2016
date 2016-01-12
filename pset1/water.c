#include <cs50.h>
#include <stdio.h>

int main(void) {
    int m;
    do {
        printf("How long do you generally shower for?\nMinutes: ");
        m = GetInt();
    }
    while (m < 1.0);
    int b = m * 192 / 16;
        printf("Bottles: %i \n", b);
}
