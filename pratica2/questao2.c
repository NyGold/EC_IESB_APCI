// 2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.

#include <stdio.h>

int main(void)
{
  int numero_1, numero_2, quociente, resto;

  printf("coloque o primeiro número: ");
  scanf("%d", &numero_1);
  printf("coloque o segundo número: ");
  scanf("%d", &numero_2);
  
  quociente = numero_1 / numero_2;
  resto = numero_1 % numero_2;

  printf("o quociete da divisão é: %d\n", quociente);
  printf("o resto da divisão é: %d\n", resto);
}