// 6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a)
#include <stdio.h>
#include <math.h>

int main(void)
{
  int a = 0;
  int b = 0;
  int c = 0;
  int delta = 0;

  printf("valor de a: ");
  scanf("%i", &a);
  printf("valor de b: ");
  scanf("%i", &b);
  printf("valor de c: ");
  scanf("%i", &c);
  
  delta = (b * b) - (4 * a * c);

  if (delta < 0)
  {
    printf("não existe raiz real\n");
    return 0;
  }
  else if (delta == 0)
  {
    float x = (-b + sqrt(delta)) / (2 * a);
    printf("raiz única: %f\n", x);
    return 0;
  }

  float x1 = 0;
  float x2 = 0;

  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);

  printf("duas raizes: %f e %f\n", x1, x2);
  return 0;
}