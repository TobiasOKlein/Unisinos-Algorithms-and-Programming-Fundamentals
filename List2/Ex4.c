/*
 * Author: Tobias Klein
 *
 * Exercise: 4. Faça um algoritmo que permita ao aluno calcular
 * a sua média final na Unisinos. Leia a nota do grau A e do grau B
 * e escreva o resultado na tela. Lembrando que o Grau A vale
 * 1/3 e o Grau B 2/3.
 * 
 */

#include <stdio.h>

int main(){

    float notaGA, notaGB, mediaFinal;

    printf("\n Calculo de media final Unisinos \n Digite sua nota do Grau A : ");
    scanf("%f", &notaGA);
    printf(" Digite sua nota do Grau B : ");
    scanf("%f", &notaGB);
    
    if(!(0<=notaGA && notaGA<=10 && 0<=notaGB && notaGB<=10)){
        printf("\n Nota invalida, sua nota deve ser entre 0 e 10.\n");
        return -1;
    }

    mediaFinal = notaGA/3 + notaGB*2/3;

    printf("\n Sua media final foi de %.2f pontos.", mediaFinal);
 
    return 0;
}
