/*
 *2. Leia quatro notas, calcule a media aritimética e
 *imprima o resultado.
 */
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media = 0;

    printf("Digite a Primeira Nota: ");
    scanf("%f", &nota1);

    printf("Digite a Segunda Nota: ");
    scanf("%f", &nota2);

    printf("Digite a Terceira Nota: ");
    scanf("%f", &nota3);

    printf("Digite a Quarta Nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A Media final e: %.2f", media);

    return 0;
}
