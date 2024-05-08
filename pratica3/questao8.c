//8. Faça um programa em C que calcule o fatorial de um número inteiro.

#include <stdio.h>

int main(void)
{
    int numero, resultado = 1;

    printf("digite um número: ");
    int leu_certo = scanf("%i", &numero);

    if (!leu_certo)
    {
        printf("entrada invalida\n");
        return 0;
    }

    for (int i = numero; i > 0; i--)
    {
        resultado = resultado * i;
    }

    printf("fatorado: %i\n", resultado);
}