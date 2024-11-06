/*
 *
 * 3. Matriz identidade, na matemática, também conhecida como matriz 𝐼 ou matriz unitária, é uma
 * matriz quadrada em que a diagonal principal contém apenas elementos 1 (um) e todos os outros
 * elementos são 0 (zero). Crie uma função que gere uma matriz identidade 4x4.
 * 
 */

#include <stdio.h>

int main()
{
    int TAMANHO = 4;
    int identidade[TAMANHO][TAMANHO];

    for(int i=0; i<TAMANHO; i++){
        printf(" [");
        for(int j=0; j<TAMANHO; j++){
            M[i][j] = (i==j);
            printf(" %d ", M[i][j]);
        }
        printf("]\n");
    }
    
    return 0;
}