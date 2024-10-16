/*
 * Author: Tobias Klein
 *
 * Exercise: 7. Um criador de pássaros deseja saber a quantidade
 * de ração diária necessária para alimentar seus pássaros. Cada
 * pássaro consome 30 gramas de ração por dia. Escreva um programa
 * que leia o número de pássaros que o criador possui e calcule
 * a quantidade total de ração necessária por dia.
 * 
 */

#include <stdio.h>

int main(){

    float racaoPassaro = 30., racaoTotal;
    int quantPassaro;

    printf("\n Quantos passaros voce possui ? : ");
    scanf("%d", &quantPassaro);
    
    if(quantPassaro < 0){
        printf("\n Valor invalido, o valor digitado nao pode ser menor que 0.");
        return -1;
    }

    racaoTotal = quantPassaro*racaoPassaro;

    printf("\n A quantidade total de racao necessaria sera de %.1f gramas por dia, ou %.3f quilos.", racaoTotal, racaoTotal/1000);
 
    return 0;
}