/*
 * Author: Tobias Klein
 *
 * Exercise: 4. Programa “Cebolinha”: ler uma string (array de char) e converter todos os r's em
 * l's.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortear(void);

int main(void)
{
    srand(time(NULL));

    int SIZE = 100;

    char string[SIZE], stling[SIZE];
    
    printf("Digite uma palavra ou frase: ");
    fgets(string, sizeof(string), stdin);
    printf("String digitada: %s", string);

    for(int x=0;x<SIZE;x++){

        if(string[x]=='r'){
            stling[x]='l';
        }
        else if(string[x]=='R'){
            stling[x]='L';
        }
        else{
            stling[x]=string[x];
        }
    }
    
    printf("String Cebolinha: %s", stling);

    return 0;
}

int sortear(void){

    int sorteio = rand()%(6)+65;
    return sorteio;
}