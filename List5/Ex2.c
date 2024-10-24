/*
 * 2. Faça um programa que leia 5 valores para dentro de um vetor e imprima o resultado de cada
 * valor multiplicado pela sua posição no vetor. 
 * Por exemplo: 1, 2, 3, 4 e 5 imprimirá na tela 0, 2, 6, 12 e 20.
 *
 */

#include <stdio.h>

int main()
{
    int vetor[5], posicao=0;

    printf("\n Primeiro valor: ");
    scanf("%d", &vetor[0]);
    printf("\n Segundo valor: ");
    scanf("%d", &vetor[1]);
    printf("\n Terceiro valor: ");
    scanf("%d", &vetor[2]);
    printf("\n Quarto valor: ");
    scanf("%d", &vetor[3]);
    printf("\n Quinto valor: ");
    scanf("%d", &vetor[4]);

    printf("\n\n Seus valores de saida sao:");

    for(posicao; posicao<5; posicao++){

        printf(" | %d", vetor[posicao]*posicao);
    }

    return 0;
}