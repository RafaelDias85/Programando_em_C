/*
*1. Faça um programa que leia tres valores e apresente como resultado
*a soma dos quadrados dos valores lidos.
*/

#include <stdio.h>

int main()
{
    int valor1, valor2, valor3, soma;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: \n");
    scanf("%d", &valor3);
    
    soma = (valor1 * valor1) + (valor2 * valor2) + (valor3 * valor3);

    printf("Voce digitou %d , %d e %d\n",valor1 ,valor2 ,valor3);
    printf("A soma do quadrado dos valores e: %d",soma);


}