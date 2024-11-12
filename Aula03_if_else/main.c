#include <stdio.h>

int main()
{
    int idade;
    printf("qual a sua idade? \n");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("Voce e menor de idade\n");
    }
    else if (idade > 18 && idade < 60)
    {
        printf("Voce e adulto\n");
    }
    else
    {
        printf("Você é idoso\n");
    }

    // saida
    printf("Sua idade e %d\n", idade);

    return 0;
}