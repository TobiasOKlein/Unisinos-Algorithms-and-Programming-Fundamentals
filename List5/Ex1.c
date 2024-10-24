/******************************************************************************

1. Criar um vetor de 10 números v e inicialize-o sorteando valores de 10 a 90 para cada elemento.
Depois disso, implemente algoritmos para:
a. Imprimir o vetor
b. Verificar se existe o valor 50 neste vetor (apenas dizer se encontrou ou não)
c. Verificar o número de ocorrências do valor 50 neste vetor.
d. Calcular a média dos valores do vetor
e. Encontrar o maior e o menor valor dos elementos do vetor.
f. Imprimir a soma e o produto acumulado dos valores dos elementos do vetor
g. Imprimir o vetor em ordem inversa
h. Copiar os elementos em ordem inversa para outro vetor.
i. Crie outros dois vetores com 10 elementos, vPares e vImpares. Copie para vPares todos os
elementos pares e para vImpares todos os elementos ímpares. Depois disso, imprima o
conteúdo de vPares e vImpares (OBS.: guarde o número de pares e ímpares para poder
acessar os vetores depois).

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUANT 10

int main()
{
    srand(time(NULL));
    
    int v[QUANT], inverso[QUANT], vPares[QUANT], vImpares[QUANT];
    int conta50 = 0, maior = 0, menor = 90, soma = 0, produto = 1, quantPar = 0, quantImpar = 0;
    float media = 0;
    
    for(int i=0;i<QUANT;i++){
        
        v[i] = rand()%81 + QUANT;
        
        printf(" %d |", v[i]);
        
        if(v[i] == 50){ conta50++; }
        
        media += v[i];
        
        if(v[i] > maior){ maior = v[i]; }
        
        if(v[i] < menor){ menor = v[i]; }
        
        soma += v[i];
        
        produto *= v[i];
    }
    
    media /= QUANT;
    
    printf("\n\n Media: %.2f | Maior: %d | Menor: %d | Soma: %d | Produto: %d \n", media, maior, menor, soma, produto);
    printf("\n O numero 50 foi encontrado %d vezes.\n\n", conta50);
    
    for(int i=0;i<QUANT;i++){
        
        inverso[i] = v[QUANT-1-i];
        
        printf(" %d |", inverso[i]);
        
        if(v[i]%2 == 0){
            
            vPares[quantPar] = v[i];
            quantPar++;
        } else {
            
            vImpares[quantImpar] = v[i];
            quantImpar++;
        }
    }
    
    printf("\n\n Impares:");
    for(int i=0; i<quantImpar; i++){ printf(" %d |", vImpares[i]); }
    
    printf("\n\n Pares:");
    for(int i=0; i<quantPar; i++){ printf(" %d |", vPares[i]); }
    
    return 0;
}