/*
 * Author: Tobias Klein
 *
 * Exercise: 1. Faça um algoritmo que leia uma quantidade de tempo
 * em minutos e escreva o tempo equivalente em segundos na tela.
 * 
 */

#include <stdio.h>

int main(){

    int minutes, seconds;

    printf("\n Envie uma quantidade inteira de minutos para serem convertidos : ");
    scanf("%d", &minutes);

    seconds = 60 * minutes;

    printf("\n Resultado: %d minutos sao convertidos para %d segundos.", minutes, seconds);

    return 0;
}