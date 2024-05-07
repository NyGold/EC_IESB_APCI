//8. Faça um programa em C que calcule o fatorial de um número inteiro.
#include <stdio.h>

int main(void)
{
    int numero, resultado = 1;

    printf("digite um número: ");
    scanf("%i", &numero);

    for (int i = numero; i > 0; i--)
    {
        resultado = resultado * i;
    }

    printf("%i", resultado);
}