// 6. Faça um programa em C que liste todos os múltiplos de 3, entre 1 e 100.

#include <stdio.h>

int main(void)
{
    printf("#>-----------<#MULTIPLOS DE 3#>-----------<#\n");
    // lista todos os números mútiplos de 3 entre 1 a 100
    for (int i = 1; i <= 100; i++)
    {
        if(i % 3 == 0)
        {
            printf("%23d\n", i);
        }
    }
}