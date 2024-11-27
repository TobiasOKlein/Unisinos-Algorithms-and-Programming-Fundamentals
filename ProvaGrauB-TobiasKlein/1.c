/*
 * Author: Tobias Klein
 *
 * Exercise: 1. Implemente uma função sortear que receba o intervalo de valores inteiros início e
 * fim como parâmetro, sorteie e retorne um número dentro do intervalo (considerando intervalo
 * fechado [início, fim]).
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortear(int inicio, int fim);

int main(void)
{
    srand(time(NULL));

    int inicio, fim;

    printf("\n Digite o valor inicial do seu sorteio: ");
    scanf("%d", &inicio);
    printf("\n Digite o valor final do seu sorteio: ");
    scanf("%d", &fim);

    int numero = sortear(inicio,fim);

    printf("\n Seu numero sorteado foi: %d", numero);

    return 0;
}

int sortear(int inicio, int fim){

    int sorteio = rand()%(fim+1) + inicio;

    return sorteio;
}