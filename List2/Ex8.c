/*
 * Author: Tobias Klein
 *
 * Exercise: 8. Um usuário deseja converter a temperatura de
 * Celsius para Fahrenheit. Escreva um programa que leia a
 * temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit.
 * 
 */

#include <stdio.h>

int main(){

    float tempCelsius, tempFahrenheit;

    printf("\n Digite a temperatura em Celsius : ");
    scanf("%f", &tempCelsius);
    
    if(tempCelsius < -253){
        printf("\n Valor invalido, o valor digitado nao pode ser menor que zero absoluto.");
        return -1;
    }

    tempFahrenheit = tempCelsius*9/5 + 32;

    printf("\n A temperatura equivalente a %.1f°C é %.1f°F.", tempCelsius, tempFahrenheit);
 
    return 0;
}