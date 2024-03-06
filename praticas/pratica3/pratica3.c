/*
  3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/
#include <stdio.h>

int main(void)
{
  float raio = 0;
  float pi = 3.1416;
  float perimetro = 0;

  printf("raio: ");
  scanf("%f", &raio);
  perimetro = 2 * pi * raio;
  printf("Perímetro = %f\n", perimetro);
  return 0;
}