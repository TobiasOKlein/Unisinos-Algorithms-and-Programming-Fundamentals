/*
 * Author: Tobias Klein
 *
 * Exercise: 5. Um motorista deseja encher o tanque do seu carro
 * com gasolina. Escreva um algoritmo para ler o preço do litro da
 * gasolina e o valor que o motorista tem disponível para abastecer.
 * Calcule quantos litros ele conseguiu colocar no tanque e exiba na tela.
 * 
 */

#include <stdio.h>

int main(){

    float precoLGasolina, dinheiro, litrosGasolina;

    printf("\n Digite o preco do litro da gasolina : ");
    scanf("%f", &precoLGasolina);
    printf(" Digite o valor em reais disponivel para abastecimento : ");
    scanf("%f", &dinheiro);
    
    if(precoLGasolina<0 || dinheiro<0){
        printf("\n Valor invalido, o valor digitado nao pode ser menor que 0.");
        return -1;
    }

    litrosGasolina = dinheiro/precoLGasolina;

    printf("\n Foram colocados %.3f litros de gasolina no tanque.", litrosGasolina);
 
    return 0;
}