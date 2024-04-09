// 5. Faça um programa em C que leia um ano e verifique se ele é bissexto 
// (é múltiplo de 4 e não é múltiplo de 100, ou é múltiplo de 400).

#include <stdio.h>

int main(void)
{
    int ano;

    printf("digite um ano: ");
    scanf("%i", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        printf("O ano e bissexto");
        return 0;
    }
    printf("O ano nao e bissexto");
}