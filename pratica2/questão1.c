// 1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números.

#include <stdio.h>

int main(void)
{
  int numero1, numero2, numero3;
  float media;

  printf("digite o primeiro numero: ");
  scanf("%d", &numero1);
  printf("digite o segundo numero: ");
  scanf("%d", &numero2);
  printf("digite o terceiro numero: ");
  scanf("%d", &numero3);

  media = ((float)numero1 + (float)numero2 + (float)numero3) / 3;
  printf("a media aritmetica dos numeros é: %.3f\n", media);
}