// 1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.

#include <stdio.h>

int main(void)
{
  int numero = 0;

  printf("digite um número: ");
  int leu_certo = scanf("%d", &numero);

  if (!leu_certo)
  {
    printf("não foi possível ler o número\n");
    return 0;
  }
  
  if (numero % 2 != 0)
  {
    printf("o número não é par\n");
    return 0;
  }
  printf("o número é par\n");
}