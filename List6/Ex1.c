/*
 *
 * 1. Dados os vetores 𝑣1 = [1,5,9,2,5], 𝑣2 = [7,4,13,21,6] e 𝑣3 = [8, −3,5,7,12], faça um programa
 * que copie o conteúdo dos vetores dados para uma matriz de tamanho 3x5 de forma a obter o
 * seguinte resultado:
 * 𝑀 = [
 *        1  5  9  2  5
 *        7  4 13 21  6
 *        8 −3  5  7 12
 *      ]
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int LINHAS = 3, COLUNAS = 5;
    int v1[5] = {1,5,9,2,5}, v2[5] = {7,4,13,21,6}, v3[5] = {8,-3,5,7,12};
    int M[LINHAS][COLUNAS];

    for(int i=0; i<LINHAS; i++){
        printf(" [");
        for(int j=0; j<COLUNAS; j++){
            M[i][j] = (i==0) * v1[j] + (i==1) * v2[j] + (i==2) * v3[j];
            printf(" %d ", M[i][j]);
        }
        printf("]\n");
    }
    
    return 0;
}