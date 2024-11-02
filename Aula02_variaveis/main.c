// Aula sobre Variaveis

#include <stdio.h> //Biblioteca da linguagem C para trabalhar com Entradas e Saidas de dados

int main()
{
    // declarando variaveis
    int idade;

    // Printf - Funcao para escrever algo na saida padrao (Console)
    printf("Qual e a sua idade? ");

    // Receber dados
    scanf("%d", &idade);

    printf("a sua idade e %d\n", idade);

    return 0;
}