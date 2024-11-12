/*
 * 2. Peça ao Usuario para digirar trs valores inteiros e imprima a soma deles.
 */

#include <stdio.h>

int main()
{
    int n1, n2, n3, soma = 0;

    printf("Digite 3 mumeros inteiros:\n");

    printf("Primeiro Numero: ");
    scanf("%d", &n1);

    printf("Segundo Numero: ");
    scanf("%d", &n2);

    printf("terceiro Numero: ");
    scanf("%d", &n3);

    soma = n1 + n2 + n3;
    printf("A Soma deles fica = %d", soma);

    return 0;
}
