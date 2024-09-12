/*
 * author: tobias klein
 *
 * structures if / else, switch / case
 *
 * list 3 - exercise 1
 *
 */

#include <stdio.h>

int main(){
    
    // Variables
    int numberDivisor, numberDividend, numberQuotient, numberRemainder;
    char error;
    
    // Introduction
    printf("\n Let's make a division!\n");
    printf("\n Send your divisor number: ");
    scanf("%d", &numberDivisor);
    printf("\n Send your dividend number: ");
    scanf("%d", &numberDividend);
    
    // Error test
    if (numberDividend == 0){
        printf("\n Your divisor can't be divided by zero.\n Press Enter to restart.");
        scanf("%c", &error);
        return -1;
    }
    
    // Execution
    numberQuotient = numberDivisor / numberDividend;
    numberRemainder = numberDivisor % numberDividend;
    printf("\n %d divided by %d  is equal to %d  with the remainder %d.\n", numberDivisor, numberDividend, numberQuotient, numberRemainder);

    return 0;
}