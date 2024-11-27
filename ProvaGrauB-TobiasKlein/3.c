/*
 * Author: Tobias Klein
 *
 * Exercise: 3. Correção de provas objetivas: faça um programa que permita cadastrar um vetor com
 * o gabarito de uma prova objetiva contendo 10 questões, cujos resultados podem ser de ‘a’ a ‘f’.
 * Depois disso, permita ao usuário a opção de entrar com as respostas dadas por um estudante.
 * 
 * O programa deve:
 * a) Contabilizar o número de respostas certas e dar a pontuação final, de 0 a 10.
 * b) Durante o processo de correção, imprimir na tela quais questões foram acertadas e quais o
 * estudante errou. Neste caso, deve-se imprimir a resposta correta.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortear(void);

int main(void)
{
    srand(time(NULL));

    int SIZE = 10;

    char gabarito[SIZE], respostas[SIZE];
    int pontuacao=0;
    
    // Definicao do Gabarito
    for(int x=0;x<SIZE;x++){

        gabarito[x] = sortear();
        printf("%c ", gabarito[x]);
    }

    // Respostas do usuario e comparacao com gabarito
    for(int x=0;x<SIZE;x++){
        
        printf("\n Resposta da questao %d : ", x+1);
        scanf(" %c", &respostas[x]);
        respostas[x] = toupper(respostas[x]);

        if(respostas[x] == gabarito[x]){

            printf(" Resposta Correta!");
            pontuacao++;
            
        }else{

            printf(" Resposta Incorreta. A Resposta Correta era %c.", gabarito[x]);
        }
    }

    printf("\n A Pontuacao do Estudante foi de %d/%d", pontuacao, SIZE);

    return 0;
}

int sortear(void){

    int sorteio = rand()%(6)+65;
    return sorteio;
}