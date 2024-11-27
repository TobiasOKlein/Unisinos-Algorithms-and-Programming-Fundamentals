/*
 * Author: Tobias Klein
 *
 * Exercise: 2. Implemente um programa que, dado uma matriz 5x5 preenchida com valores entre 0 e
 * 4, faça a contagem de quantos valores de cada um dos números possíveis esta matriz contém.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortear(int SIZE);

int main(void)
{
    srand(time(NULL));

    int SIZE = 5;

    int matriz[SIZE][SIZE];
    int contagem[] = {0,0,0,0,0};
    
    // Definicao da Matriz
    for(int x=0;x<SIZE;x++){
        for(int y=0;y<SIZE;y++){

            matriz[x][y] = sortear(SIZE);
            printf("%d ",matriz[x][y]);
        }
        printf("\n");
    }

    // Contagem
    for(int x=0;x<SIZE;x++){
        for(int y=0;y<SIZE;y++){

            contagem[matriz[x][y]]++;
        }
    }

    // Loop Print
    for(int x=0;x<SIZE;x++){

        printf("\n Quantidade de valores %d : %d", x, contagem[x]);
    }

    return 0;
}

int sortear(int SIZE){

    int sorteio = rand()%(SIZE);
    return sorteio;
}