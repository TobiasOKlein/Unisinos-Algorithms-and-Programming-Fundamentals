/*
 * Author: Tobias Klein
 *
 * Exercise: 3. Encontrar o dobro de um número caso ele seja
 * positivo e o seu triplo caso seja negativo, imprimindo o resultado.
 * 
 */

#include <stdio.h>

int main(){

    int numero;

    printf("\n Digite seu numero : ");
    scanf("%d", &numero);

    if (numero > 0){
        printf("\n Seu numero digitado (%d) eh positivo, e seu dobro eh %d.", numero, numero*2);
    }else if(numero < 0){
        printf("\n Seu numero digitado (%d) eh negativo, e seu triplo eh %d.", numero, numero*3);
    }else{
        printf("\n Voce digitou zero. Sem modificacoes.");
    }
    
    return 0;
}