/*
2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
*/

#include <stdio.h>

int main(void)
{
  unsigned int base = 0;
  unsigned int altura = 0;
  
  printf("base: ");
  scanf("%i", &base);
  printf("altura: ");
  scanf("%i", &altura);

  int area = (base * altura) / 2;

  printf("Área = %i\n", area);
}