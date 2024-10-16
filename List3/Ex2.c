/*
 * Author: Tobias Klein
 *
 * Exercise: 2. Faça um algoritmo que leia os valores A, B, C
 * e imprima na tela se a soma de A + B é menor que A + C.
 * 
 */

#include <stdio.h>

int main(){

    float A, B, C;

    printf("\n Digite o valor 'A' : ");
    scanf("%f", &A);
    printf("\n Digite o valor 'B' : ");
    scanf("%f", &B);
    printf("\n Digite o valor 'C' : ");
    scanf("%f", &C);

    if ((A+B) < (A+C)){
        printf("\n (A + B) eh menor que (A + C).\n");
    }else{
        printf("\n (A + B) nao eh menor que (A + C).\n");
    }
    
    return 0;
}