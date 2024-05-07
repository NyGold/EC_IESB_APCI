//8. Faça um programa em C que calcule o fatorial de um número inteiro.

#include <stdio.h>

int main(void)
{
    int numero = 0, total = 0;

    printf("digite um numero: ");
    scanf("%i", &numero);

    for (int i = numero; i > 0; i--)
    {
        total += numero * (numero - i);
    }

    printf("o valor de %i! = %i", numero, total);
}